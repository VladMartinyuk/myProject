#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug() << "My app start!";
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
