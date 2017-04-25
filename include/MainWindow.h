
//MainWindow.h: Contains class of main window

//author: Michal Kocon, Mateusz Chomiczewski


#ifndef _MAIN_WINDOW_H_
#define _MAIN_WINDOW_H_

#include <QtWidgets/QMainWindow>
#include "ArtificialLife.h"

class MainWindow : public QMainWindow{
public:
	MainWindow();
private:
	ArtificialLife life_;
};

#endif