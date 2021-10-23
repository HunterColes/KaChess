#include "include/Gui/mainwindow.h"
#include <QApplication>

int main(int argc, char* argv[])
{
	vtkObject::GlobalWarningDisplayOff();
	QApplication a(argc, argv);
	MainWindow* w = new MainWindow();
	w->show();

	return a.exec();
}