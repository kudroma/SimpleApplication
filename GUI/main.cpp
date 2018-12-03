#include "Widget.h"
#include <QtWidgets/QApplication>

#include "Controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GUI::Controller controller;

    return a.exec();
}