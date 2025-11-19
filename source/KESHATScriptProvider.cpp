//========================================================================================
//  
//  $File: $
//  
//  Owner: 
//  
//  $Author: $
//  
//  $DateTime: $
//  
//  $Revision: $
//  
//  $Change: $
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// Interface includes:
#include "ICommand.h"
#include "IHyperlink.h"
#include "IHyperlinkCmdData.h"
#include "IScript.h"
#include "IScriptRequestData.h"
#include "IStringData.h"
#include "IWorkspace.h"

// General includes:
#include "CAlert.h" // CAlert::InformationAlert();
#include "CmdUtils.h"
#include "CScriptProvider.h"
#include "HyperlinkID.h" // for kChangeHyperlinkCmdBoss
#include "UIDList.h"

// Project includes:
#include "KESHATScriptingDefs.h"
#include "KESHATID.h"

class KESHATScriptProvider : public CScriptProvider
{
public:

	KESHATScriptProvider(IPMUnknown* boss) : CScriptProvider(boss) {};

	~KESHATScriptProvider() {}

	virtual ErrorCode AccessProperty(ScriptID scriptID_prop, IScriptRequestData* iScriptRequestData, IScript* iScript_parent);

private:

	virtual ErrorCode GetSetHyperlinkAltText(ScriptID scriptID_prop, IScriptRequestData* iScriptRequestData, IScript* iScript_parent);
};

CREATE_PMINTERFACE(KESHATScriptProvider, kKESHATScriptProviderImpl)

ErrorCode KESHATScriptProvider::AccessProperty(ScriptID ScriptID_prop, IScriptRequestData* iScriptRequestData, IScript* iScript_parent)
{
	ErrorCode status = kFailure;

	switch (ScriptID_prop.Get())
	{
	case p_KESHATHyperlinkAltText:
		status = GetSetHyperlinkAltText(ScriptID_prop, iScriptRequestData, iScript_parent);
		break;

    default:
		status = CScriptProvider::AccessProperty(ScriptID_prop, iScriptRequestData, iScript_parent);
    }
    return status;
}

ErrorCode KESHATScriptProvider::GetSetHyperlinkAltText(
	ScriptID scriptID_prop, IScriptRequestData* iScriptRequestData, IScript* iScript_parent)
{
	ErrorCode status = kFailure;

	do
	{
		InterfacePtr<IHyperlink> iHyperlink(iScript_parent, ::UseDefaultIID());
		if (iHyperlink == nil) break;
		
		PMString pMString_hyperlinkAltText;
		if (iScriptRequestData->IsPropertyGet()) // Get
		{
			// IID_IHYPERLINKALTTEXTDATA
			InterfacePtr<IStringData> iStringData(iHyperlink, IID_IHYPERLINKALTTEXTDATA);
			if (iStringData == nil) continue;

			pMString_hyperlinkAltText = iStringData->GetString();

			// Append return data
			iScriptRequestData->AppendReturnData(iScript_parent, scriptID_prop, ScriptData(pMString_hyperlinkAltText));
		}
		else if (iScriptRequestData->IsPropertyPut()) // Set
		{
			// ---------------------------------------------------------------------------------------
			// Extract request data
			ScriptData scriptData;
			status = iScriptRequestData->ExtractRequestData(scriptID_prop.Get(), scriptData);
			if (status != kSuccess) break;

			status = scriptData.GetPMString(pMString_hyperlinkAltText);
			if (status != kSuccess) break;

			// ---------------------------------------------------------------------------------------
			// Set
			InterfacePtr<ICommand> iCommand(CmdUtils::CreateCommand(kChangeHyperlinkCmdBoss));
			if (iCommand == nil) break;

			iCommand->SetItemList(UIDList(iHyperlink));
			
			InterfacePtr<IHyperlinkCmdData> iHyperlinkCmdData(iCommand, ::UseDefaultIID());
			if (iHyperlinkCmdData == nil) break;
			
			iHyperlinkCmdData->SetHyperlinkAltText(pMString_hyperlinkAltText);

			status = CmdUtils::ProcessCommand(iCommand);
		}
		status = kSuccess;
	} while (false);

	return status;
}
