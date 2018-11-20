#include <QtWidgets>

#include "dialog.h"

int main(int argc, char *argv[])
{
    // Creates an instance of QApplication
    QApplication a(argc, argv);

    a.setStyleSheet("QInputDialog { background-color: yellow }");

    // This is our MainWidget class containing our GUI and functionality
    Dialog d;
    d.show(); // Show main window

    // run the application and return execs() return value/code
    return a.exec();
}