#include "IDE_Slap.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	IDE_Slap w;
	w.show();
	return a.exec();
}
