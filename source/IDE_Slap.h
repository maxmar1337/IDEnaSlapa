#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IDE_Slap.h"

class IDE_Slap : public QMainWindow
{
	Q_OBJECT

public:
	IDE_Slap(QWidget *parent = Q_NULLPTR);

private:
	Ui::IDE_SlapClass ui;
};
