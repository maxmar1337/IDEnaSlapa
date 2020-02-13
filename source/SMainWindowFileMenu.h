#pragma once
#include <qmenu.h>
class SMainWindowFileMenu :
	public QMenu
{
public:
	SMainWindowFileMenu();
	~SMainWindowFileMenu() {};

private:
	void OnNew();
	void OnSave();
	void OnLoad();
	void OnExit();
};

