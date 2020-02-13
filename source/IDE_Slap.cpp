#include "IDE_Slap.h"
#include <QMenu>
#include <QMenuBar>
#include <QPlainTextEdit>
#include "SMainWindowFileMenu.h"


/*****************************************************************************************************/
IDE_Slap::IDE_Slap(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QMenuBar* mainWindowbar = menuBar();
	mainWindowbar->addMenu(new SMainWindowFileMenu());

	MainTextEditor = std::make_shared<QPlainTextEdit>(new QPlainTextEdit());
	setCentralWidget(MainTextEditor.get());
	setWindowTitle(tr("SlapIDE"));
}

