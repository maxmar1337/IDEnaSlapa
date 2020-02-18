#include "IDE_Slap.h"
#include <QMenu>
#include <QMenuBar>
#include <QPlainTextEdit>
#include "SMainWindowFileMenu.h"
#include "SFileManager.h"

//static IDE_Slap* g_instance = nullptr;
 QPlainTextEdit* IDE_Slap::MainTextEditor = nullptr;

/*****************************************************************************************************/
IDE_Slap::IDE_Slap(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QMenuBar* mainWindowbar = menuBar();
	mainWindowbar->addMenu(new SMainWindowFileMenu());

	IDE_Slap::MainTextEditor = new QPlainTextEdit();

	setCentralWidget(IDE_Slap::MainTextEditor);
	setWindowTitle(tr("SlapIDE"));

}
