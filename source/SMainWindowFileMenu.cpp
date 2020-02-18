#include "SMainWindowFileMenu.h"
#include <QApplication>
#include <QFileDialog>
#include <QPlainTextEdit>

#include "SFileManager.h"
#include "IDE_Slap.h"

/*****************************************************************************************************/
SMainWindowFileMenu::SMainWindowFileMenu()
{
	setTitle(tr("File"));
	addAction(tr("New"), this, &SMainWindowFileMenu::OnNew);
	addAction(tr("Save"), this, &SMainWindowFileMenu::OnSave);
	addAction(tr("Load"), this, &SMainWindowFileMenu::OnLoad);
	addAction(tr("Exit"), this, &SMainWindowFileMenu::OnExit);
}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnNew()
{

}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnSave()
{
	SFileManager::SaveFile(IDE_Slap::GetMainTextEditor()->toPlainText().toStdWString(), ActiveFilePath.toStdWString());
}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnLoad()
{
	ActiveFilePath = QFileDialog::getOpenFileName(this, tr("LoadFile"));
	QString fileText; 
	const std::wstring text = SFileManager::LoadFile(ActiveFilePath.toStdWString());
	fileText = QString::fromStdWString(text);
	IDE_Slap::GetMainTextEditor()->setPlainText(fileText);
}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnExit()
{
	QApplication::quit();
}