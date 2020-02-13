#pragma once

#include <string>

class SFileManager
{
public:
	SFileManager();
	~SFileManager();

	static void SaveFile(char* path);
	static std::wstring LoadFile(std::string path);
};



