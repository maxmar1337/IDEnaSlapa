#include "SFileManager.h"
//#include <iostream>
#include <fstream>
#include <QString>


SFileManager::SFileManager()
{
}


SFileManager::~SFileManager()
{
}

void SFileManager::SaveFile(char* path)
{
	std::ofstream ofs(path);

	ofs << "test" << std::endl;
	ofs.close();
}

std::wstring SFileManager::LoadFile(std::string path)
{
	std::wifstream ifs(path);
	std::wstring fileText;
	QString qFileText;
	while (ifs)
	{
		std::wstring inputText;
		getline(ifs, inputText);
		fileText.append(inputText);
	}

	return fileText;
}
