#include "SFileManager.h"
//#include <iostream>
#include <fstream>
#include <QString>

#include <locale>
#include <codecvt>

#include <cstdio>  // for _fileno
#include <io.h>    // for _setmode
#include <fcntl.h> // for _O_U16TEXT


using namespace std;

/**********************************************************************************/
SFileManager::SFileManager()
{
}

/**********************************************************************************/
SFileManager::~SFileManager()
{
}

/**********************************************************************************/
void SFileManager::SaveFile(std::wstring& text, std::wstring& path)
{
	std::wofstream ofs(path);

	if (ofs)
	{
		ofs << text << std::endl;
		ofs.close();
	}
}

/**********************************************************************************/
std::wstring SFileManager::LoadFile(std::wstring& path)
{
	std::wifstream ifs(path);
	std::wstring fileText;

	while (ifs)
	{
		std::wstring inputText;
		getline(ifs, inputText);
		fileText.append(inputText);
	}

	return fileText;
}
