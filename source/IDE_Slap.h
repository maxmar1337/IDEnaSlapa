#pragma once

#include <QtWidgets/QMainWindow>
#include <QPlainTextEdit>
#include <memory.h>

#include "ui_IDE_Slap.h"

//class QPlainTextEdit;

class IDE_Slap : public QMainWindow
{
	Q_OBJECT

public:
	IDE_Slap(QWidget *parent = Q_NULLPTR);

	static QPlainTextEdit* GetMainTextEditor() { return IDE_Slap::MainTextEditor; }

private:
	Ui::IDE_SlapClass ui;

	static QPlainTextEdit* MainTextEditor;
};