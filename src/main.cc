#include <iostream>
#include <QtWidgets/QApplication>
#include "MainWindow.h"

int main(int argc, char** argv){
	QApplication gui(argc, argv);
	MainWindow window;
	window.show();
	return gui.exec();
}