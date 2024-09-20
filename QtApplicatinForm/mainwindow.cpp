#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondmainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    QString uName = ui->lineEdit->text();
    openLogin = new SecondMainWindow(this);
    openLogin->setLabelUserName(uName);
    openLogin->show();
}

