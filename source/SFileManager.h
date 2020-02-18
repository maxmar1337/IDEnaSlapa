#pragma once

#include <string>

class SFileManager
{
public:
	SFileManager();
	~SFileManager();

	static void SaveFile(std::wstring& string, std::wstring& path);
	static std::wstring LoadFile(std::wstring& path);
};



