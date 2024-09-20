#ifndef SECONDMAINWINDOW_H
#define SECONDMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondMainWindow;
}

class SecondMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondMainWindow(QWidget *parent = nullptr);
    ~SecondMainWindow();

public slots:
    void setLabelUserName(QString userName);

private slots:
    void on_comboBoxStatus_currentIndexChanged(const QString &arg1);

    void on_pushButtonAdd_clicked();

private:
    Ui::SecondMainWindow *ui;
    QString line;
    QStringList data;


};

#endif // SECONDMAINWINDOW_H
