#pragma once

#include "Main.h"

class CUtilities {
public:
	DWORD64 ExtractMovDWORD(DWORD64 dwAddress, DWORD dwOffset, BOOL bRip);
	DWORD64 ExtractCallDWORD(DWORD64 dwAddress, DWORD dwOffset);
	BOOL Compare(const BYTE* pData, const BYTE* bMask, const char* szMask);
	DWORD64 FindPattern(BYTE* bMask, const char* szMask);
	DWORD64 FindPatternModule(BYTE* bMask, const char* szMask, HMODULE Module);

	float Distance(CG::FVector from, CG::FVector to);
};

extern CUtilities* Utilities;