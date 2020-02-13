#pragma once
class SFileManager
{
public:
	SFileManager();
	~SFileManager();

	static void SaveFile(char* path);
	static char* LoadFile(char* path);
};



