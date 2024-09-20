#include "secondmainwindow.h"
#include "ui_secondmainwindow.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>

SecondMainWindow::SecondMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondMainWindow)
{
    ui->setupUi(this);
    ui->comboBoxStatus->addItem("");
    ui->comboBoxStatus->addItem("L1");
    ui->comboBoxStatus->addItem("L2");
    ui->comboBoxStatus->addItem("L3");
    ui->comboBoxStatus->addItem("L4");

    ui->comboBoxStatusForm->addItem("");
    ui->comboBoxStatusForm->addItem("L1");
    ui->comboBoxStatusForm->addItem("L2");
    ui->comboBoxStatusForm->addItem("L3");
    ui->comboBoxStatusForm->addItem("L4");

}

SecondMainWindow::~SecondMainWindow()
{
    delete ui;
}
void SecondMainWindow::setLabelUserName(QString userName)
{
    ui->labelUserNameDisplay->setText(userName);
}
void SecondMainWindow::on_comboBoxStatus_currentIndexChanged(const QString &arg1)
{
    if(arg1 != "")
    {
        int rowCount = ui->tableWidget->rowCount();
        qDebug()<<"Row : "<<rowCount;
        ui->tableWidget->insertRow(rowCount);
    }
}

void SecondMainWindow::on_pushButtonAdd_clicked()
{
    QString name = ui->lineEditName->text();
    QString status = ui->comboBoxStatusForm->currentText();
    line = name+","+status;
    data = line.split(",");


    QFile file("CandidateDetails");
    file.open(QIODevice::Append | QIODevice::ReadWrite);
    QTextStream out(&file);
    out<<line<<endl;
}















