#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "generators.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Hide the cat label
    ui->catLabel->hide();

}

// Set the color
void MainWindow::setColor(std::string color) {
    ui->colorLabel->setText(QString::fromStdString(color));
}
// Set the size
void MainWindow::setSize(std::string size) {
    ui->sizeLabel->setText(QString::fromStdString(size));
}
// Show the cat label
void MainWindow::showCat() {
    ui->catLabel->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionGenerate_new_bear_triggered()
{
    // Hide cat's label, if it was shown
    if (!ui->catLabel->isHidden()) {
        ui->catLabel->hide();
    }

    // Set the color
    this->setColor(getcolor());
    // Set the size
    this->setSize(getsize());

   // 1/5 times, show cat's label
    if (rand() % 5 + 1 == 3) {
        this->showCat();
    }

}

void MainWindow::on_actionExit_triggered()
{
    qApp->quit();
}
