#include "IDE_Slap.h"
#include <QMenu>
#include <QMenuBar>
#include <QPlainTextEdit>
#include "SMainWindowFileMenu.h"
#include "SFileManager.h"

/*****************************************************************************************************/
IDE_Slap::IDE_Slap(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QMenuBar* mainWindowbar = menuBar();
	mainWindowbar->addMenu(new SMainWindowFileMenu());

	MainTextEditor = std::make_shared<QPlainTextEdit>(new QPlainTextEdit());

	MainTextEditor->clear();
	//SFileManager::SaveFile("Test.txt");
	MainTextEditor->insertPlainText(QString::fromStdWString(SFileManager::LoadFile("Test.txt")));

	setCentralWidget(MainTextEditor.get());
	setWindowTitle(tr("SlapIDE"));
}

