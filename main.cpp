#include "mainwindow.h"
#include "generators.h"
#include <QApplication>
#include <time.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    /* BearMaker Logic */
    srand(time(NULL));

    // Get a random size and color
    string rcolor = getcolor();
    string rsize = getsize();

    // Generate random number between 1..5
    int rcat = rand() % 5 + 1;

    /* Qt Logic */
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    /* BearMaker Actions*/

    // Set the color and size
    w.setColor(rcolor);
    w.setSize(rsize);

    // If it's a cat, show the label
    if (rcat == 3) {
        w.showCat();
    }

    return a.exec();
}
