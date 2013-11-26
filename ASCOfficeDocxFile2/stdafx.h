// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows 95 and Windows NT 4 or later.
#define WINVER 0x0400		// Change this to the appropriate value to target Windows 98 and Windows 2000 or later.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows NT 4 or later.
#define _WIN32_WINNT 0x0400	// Change this to the appropriate value to target Windows 2000 or later.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 4.0 or later.
#define _WIN32_IE 0x0400	// Change this to the appropriate value to target IE 5.0 or later.
#endif

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _CRT_SECURE_NO_DEPRECATE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off ATL's hiding of some common and often safely ignored warning messages
#define _ATL_ALL_WARNINGS
#include <windows.h>

#include <atlbase.h>
#include <atlcom.h>
#include <atlwin.h>
#include <atltypes.h>
#include <atlctl.h>
#include <atlhost.h>
#include <atlcoll.h>

#define __USE_XML_COMMON__

using namespace ATL;
#include "../Common/ASCUtils.h"

#include "../ASCImageStudio3/ASCGraphics/Interfaces/ASCRenderer.h"
#import "../Redist/ASCMediaCore3.dll"		named_guids raw_interfaces_only rename_namespace("MediaCore"), exclude("tagRECT")
#import "../Redist/ASCImageStudio3.dll"	named_guids raw_interfaces_only rename_namespace("AVSImageStudio")
#import "../Redist/ASCFontConverter.dll"	named_guids raw_interfaces_only rename_namespace("Fonts")
#import "../../../../../Redist/AVSOfficeStudio/AVSOfficePPTXFile.dll"	raw_interfaces_only rename_namespace("PPTXFile")

#ifdef SOLUTION_ASCOFFICEDOCXFILE2
#import "../Redist/ASCGraphics.dll"		named_guids raw_interfaces_only rename_namespace("AVSGraphics")//, exclude(IAVSRenderer)
#endif

#include "../Common/DocxFormat/Source/DocxFormat/Docx.h"
#include "../Common/DocxFormat/Source/XlsxFormat/Xlsx.h"

#include <Gdiplus.h>
#pragma comment(lib, "gdiplus.lib")

using namespace Gdiplus;