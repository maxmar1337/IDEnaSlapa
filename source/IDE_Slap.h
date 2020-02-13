#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IDE_Slap.h"

class QPlainTextEdit;

class IDE_Slap : public QMainWindow
{
	Q_OBJECT

public:
	IDE_Slap(QWidget *parent = Q_NULLPTR);

	QPlainTextEdit* GetMainTextEditor() { return MainTextEditor.get(); }
private:
	Ui::IDE_SlapClass ui;

	std::shared_ptr<QPlainTextEdit> MainTextEditor;
};
