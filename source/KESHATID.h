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


#ifndef __KESHATID_h__
#define __KESHATID_h__

#include "SDKDef.h"

// Company:
#define kKESHATCompanyKey	kSDKDefPlugInCompanyKey		// Company name used internally for menu paths and the like. Must be globally unique, only A-Z, 0-9, space and "_".
#define kKESHATCompanyValue	kSDKDefPlugInCompanyValue	// Company name displayed externally.

// Plug-in:
#define kKESHATPluginName	"KohakuExtendScriptHyperlinkAltText"			// Name of this plug-in.
#define kKESHATPrefixNumber	0xe204531 		// Unique prefix number for this plug-in(*Must* be obtained from Adobe Developer Support).
#define kKESHATVersion		kSDKDefPluginVersionString						// Version of this plug-in (for the About Box).
#define kKESHATAuthor		""					// Author of this plug-in (for the About Box).

// Plug-in Prefix: (please change kKESHATPrefixNumber above to modify the prefix.)
#define kKESHATPrefix		RezLong(kKESHATPrefixNumber)				// The unique numeric prefix for all object model IDs for this plug-in.
#define kKESHATStringPrefix	SDK_DEF_STRINGIZE(kKESHATPrefixNumber)	// The string equivalent of the unique prefix number for  this plug-in.

// Missing plug-in: (see ExtraPluginInfo resource)
#define kKESHATMissingPluginURLValue		kSDKDefPartnersStandardValue_enUS // URL displayed in Missing Plug-in dialog
#define kKESHATMissingPluginAlertValue	kSDKDefMissingPluginAlertValue // Message displayed in Missing Plug-in dialog - provide a string that instructs user how to solve their missing plug-in problem

// PluginID:
DECLARE_PMID(kPlugInIDSpace, kKESHATPluginID, kKESHATPrefix + 0)

// ClassIDs:
DECLARE_PMID(kClassIDSpace, kKESHATScriptProviderBoss, kKESHATPrefix + 3)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 4)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 5)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 6)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 7)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 8)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 9)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 10)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 11)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 12)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 13)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 14)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 15)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 16)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 17)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 18)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 19)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 20)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 21)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 22)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 23)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 24)
//DECLARE_PMID(kClassIDSpace, kKESHATBoss, kKESHATPrefix + 25)


// InterfaceIDs:
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 0)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 1)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 2)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 3)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 4)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 5)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 6)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 7)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 8)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 9)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 10)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 11)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 12)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 13)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 14)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 15)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 16)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 17)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 18)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 19)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 20)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 21)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 22)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 23)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 24)
//DECLARE_PMID(kInterfaceIDSpace, IID_IKESHATINTERFACE, kKESHATPrefix + 25)


// ImplementationIDs:
DECLARE_PMID(kImplementationIDSpace, kKESHATScriptProviderImpl, kKESHATPrefix + 0 )
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 1)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 2)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 3)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 4)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 5)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 6)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 7)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 8)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 9)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 10)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 11)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 12)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 13)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 14)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 15)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 16)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 17)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 18)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 19)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 20)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 21)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 22)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 23)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 24)
//DECLARE_PMID(kImplementationIDSpace, kKESHATImpl, kKESHATPrefix + 25)


// ActionIDs:
DECLARE_PMID(kActionIDSpace, kKESHATAboutActionID, kKESHATPrefix + 0)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 5)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 6)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 7)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 8)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 9)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 10)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 11)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 12)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 13)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 14)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 15)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 16)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 17)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 18)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 19)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 20)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 21)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 22)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 23)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 24)
//DECLARE_PMID(kActionIDSpace, kKESHATActionID, kKESHATPrefix + 25)


// WidgetIDs:
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 2)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 3)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 4)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 5)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 6)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 7)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 8)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 9)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 10)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 11)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 12)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 13)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 14)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 15)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 16)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 17)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 18)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 19)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 20)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 21)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 22)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 23)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 24)
//DECLARE_PMID(kWidgetIDSpace, kKESHATWidgetID, kKESHATPrefix + 25)

//Script Element IDs
DECLARE_PMID(kScriptInfoIDSpace, kKESHATHyperlinkAltTextPropertyScriptElement, kKESHATPrefix + 1)

// "About Plug-ins" sub-menu:
#define kKESHATAboutMenuKey			kKESHATStringPrefix "kKESHATAboutMenuKey"
#define kKESHATAboutMenuPath		kSDKDefStandardAboutMenuPath kKESHATCompanyKey

// "Plug-ins" sub-menu:
#define kKESHATPluginsMenuKey 		kKESHATStringPrefix "kKESHATPluginsMenuKey"
#define kKESHATPluginsMenuPath		kSDKDefPlugInsStandardMenuPath kKESHATCompanyKey kSDKDefDelimitMenuPath kKESHATPluginsMenuKey

// Menu item keys:

// Other StringKeys:
#define kKESHATAboutBoxStringKey	kKESHATStringPrefix "kKESHATAboutBoxStringKey"
#define kKESHATTargetMenuPath kKESHATPluginsMenuPath

// Menu item positions:


// Initial data format version numbers
#define kKESHATFirstMajorFormatNumber  RezLong(1)
#define kKESHATFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kKESHATCurrentMajorFormatNumber kKESHATFirstMajorFormatNumber
#define kKESHATCurrentMinorFormatNumber kKESHATFirstMinorFormatNumber

#endif // __KESHATID_h__
