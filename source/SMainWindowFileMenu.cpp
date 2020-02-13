#include "SMainWindowFileMenu.h"
#include <QApplication>

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

}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnLoad()
{

}

/*****************************************************************************************************/
void SMainWindowFileMenu::OnExit()
{
	QApplication::quit();
}