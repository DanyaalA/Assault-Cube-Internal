#pragma once
#include "pch.h"
#include <Windows.h>
#include <vector>
namespace mem 
{
	void PatchEx(BYTE* dst, BYTE* src, unsigned int size, HANDLE hProc);
	void NopEx(BYTE* dst, unsigned int size, HANDLE hProc);
	uintptr_t FindDMAAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets);

	void Patch(BYTE* dst, BYTE* src, unsigned int size);
	void Nop(BYTE* dst, unsigned int size);
	uintptr_t FindDMAAddy(uintptr_t ptr, std::vector<unsigned int> offsets);
}