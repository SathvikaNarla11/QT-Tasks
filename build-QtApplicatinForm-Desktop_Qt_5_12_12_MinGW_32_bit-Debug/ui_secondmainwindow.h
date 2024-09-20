/********************************************************************************
** Form generated from reading UI file 'secondmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDMAINWINDOW_H
#define UI_SECONDMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditPhoneNumber;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditEmailId;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *lineEditCurrentCompany;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *lineEditWorkLocation;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLineEdit *lineEditHomeLocation;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLineEdit *lineEditEdu;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QComboBox *comboBoxStatusForm;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_14;
    QLineEdit *lineEditPosition;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *lineEditStage;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonShow;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonClear;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBoxCandidateDetails;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *labelUserNameDisplay;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelRoleDisplay;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBoxStatus;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QComboBox *comboBoxOwner;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPosition;
    QComboBox *comboBoxPosition;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelStage;
    QComboBox *comboBoxStage;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QWidget *tab_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondMainWindow)
    {
        if (SecondMainWindow->objectName().isEmpty())
            SecondMainWindow->setObjectName(QString::fromUtf8("SecondMainWindow"));
        SecondMainWindow->resize(992, 612);
        centralwidget = new QWidget(SecondMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 631, 351));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 23, 347, 311));
        horizontalLayout_18 = new QHBoxLayout(widget);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(10, 25, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(97, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout->addWidget(lineEditName);


        verticalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(97, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEditPhoneNumber = new QLineEdit(widget);
        lineEditPhoneNumber->setObjectName(QString::fromUtf8("lineEditPhoneNumber"));

        horizontalLayout_2->addWidget(lineEditPhoneNumber);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(97, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_8);

        lineEditEmailId = new QLineEdit(widget);
        lineEditEmailId->setObjectName(QString::fromUtf8("lineEditEmailId"));

        horizontalLayout_8->addWidget(lineEditEmailId);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(97, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_9);

        lineEditCurrentCompany = new QLineEdit(widget);
        lineEditCurrentCompany->setObjectName(QString::fromUtf8("lineEditCurrentCompany"));

        horizontalLayout_11->addWidget(lineEditCurrentCompany);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(97, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_10);

        lineEditWorkLocation = new QLineEdit(widget);
        lineEditWorkLocation->setObjectName(QString::fromUtf8("lineEditWorkLocation"));

        horizontalLayout_12->addWidget(lineEditWorkLocation);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(97, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_11);

        lineEditHomeLocation = new QLineEdit(widget);
        lineEditHomeLocation->setObjectName(QString::fromUtf8("lineEditHomeLocation"));

        horizontalLayout_13->addWidget(lineEditHomeLocation);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(97, 0));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_12);

        lineEditEdu = new QLineEdit(widget);
        lineEditEdu->setObjectName(QString::fromUtf8("lineEditEdu"));

        horizontalLayout_14->addWidget(lineEditEdu);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(97, 0));
        label_13->setMaximumSize(QSize(97, 97));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_13);

        comboBoxStatusForm = new QComboBox(widget);
        comboBoxStatusForm->setObjectName(QString::fromUtf8("comboBoxStatusForm"));

        horizontalLayout_15->addWidget(comboBoxStatusForm);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(97, 0));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_14);

        lineEditPosition = new QLineEdit(widget);
        lineEditPosition->setObjectName(QString::fromUtf8("lineEditPosition"));

        horizontalLayout_16->addWidget(lineEditPosition);


        verticalLayout_9->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(97, 0));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_15);

        lineEditStage = new QLineEdit(widget);
        lineEditStage->setObjectName(QString::fromUtf8("lineEditStage"));

        horizontalLayout_17->addWidget(lineEditStage);


        verticalLayout_9->addLayout(horizontalLayout_17);


        horizontalLayout_18->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, -1, 10);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        pushButtonAdd = new QPushButton(widget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));

        verticalLayout_10->addWidget(pushButtonAdd);

        pushButtonShow = new QPushButton(widget);
        pushButtonShow->setObjectName(QString::fromUtf8("pushButtonShow"));

        verticalLayout_10->addWidget(pushButtonShow);

        pushButtonSave = new QPushButton(widget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        verticalLayout_10->addWidget(pushButtonSave);

        pushButtonClear = new QPushButton(widget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        verticalLayout_10->addWidget(pushButtonClear);


        horizontalLayout_18->addLayout(verticalLayout_10);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBoxCandidateDetails = new QGroupBox(tab_3);
        groupBoxCandidateDetails->setObjectName(QString::fromUtf8("groupBoxCandidateDetails"));
        verticalLayout_7 = new QVBoxLayout(groupBoxCandidateDetails);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label = new QLabel(groupBoxCandidateDetails);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        groupBox_2 = new QGroupBox(groupBoxCandidateDetails);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        labelUserNameDisplay = new QLabel(groupBox_2);
        labelUserNameDisplay->setObjectName(QString::fromUtf8("labelUserNameDisplay"));
        labelUserNameDisplay->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(labelUserNameDisplay);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(20, 0));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        labelRoleDisplay = new QLabel(groupBox_2);
        labelRoleDisplay->setObjectName(QString::fromUtf8("labelRoleDisplay"));
        labelRoleDisplay->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(labelRoleDisplay);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 7);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBoxStatus = new QComboBox(groupBox_2);
        comboBoxStatus->setObjectName(QString::fromUtf8("comboBoxStatus"));

        horizontalLayout_5->addWidget(comboBoxStatus);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBoxOwner = new QComboBox(groupBox_2);
        comboBoxOwner->setObjectName(QString::fromUtf8("comboBoxOwner"));

        horizontalLayout_6->addWidget(comboBoxOwner);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        labelPosition = new QLabel(groupBox_2);
        labelPosition->setObjectName(QString::fromUtf8("labelPosition"));

        horizontalLayout_9->addWidget(labelPosition);

        comboBoxPosition = new QComboBox(groupBox_2);
        comboBoxPosition->setObjectName(QString::fromUtf8("comboBoxPosition"));

        horizontalLayout_9->addWidget(comboBoxPosition);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelStage = new QLabel(groupBox_2);
        labelStage->setObjectName(QString::fromUtf8("labelStage"));

        horizontalLayout_10->addWidget(labelStage);

        comboBoxStage = new QComboBox(groupBox_2);
        comboBoxStage->setObjectName(QString::fromUtf8("comboBoxStage"));

        horizontalLayout_10->addWidget(comboBoxStage);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        horizontalLayout_7->addLayout(horizontalLayout_10);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 300));
        groupBox_3->setMaximumSize(QSize(16777215, 300));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(groupBox_3);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8(" QHeaderView::section {\n"
"            background-color: #f0f0f0;\n"
"            border: 1px solid #d0d0d0;\n"
"            padding: 4px;\n"
"        }"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(125);

        verticalLayout_5->addWidget(tableWidget);


        verticalLayout_3->addWidget(groupBox_3);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_6->addWidget(groupBox_2);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_8->addWidget(groupBoxCandidateDetails);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());

        verticalLayout->addWidget(tabWidget);

        SecondMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 992, 21));
        SecondMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecondMainWindow->setStatusBar(statusbar);

        retranslateUi(SecondMainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SecondMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondMainWindow)
    {
        SecondMainWindow->setWindowTitle(QApplication::translate("SecondMainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SecondMainWindow", "Home", nullptr));
        groupBox->setTitle(QApplication::translate("SecondMainWindow", "Personal Details", nullptr));
        label_2->setText(QApplication::translate("SecondMainWindow", "Name :", nullptr));
        label_3->setText(QApplication::translate("SecondMainWindow", "Phone Number : ", nullptr));
        label_8->setText(QApplication::translate("SecondMainWindow", "        Email ID : ", nullptr));
        label_9->setText(QApplication::translate("SecondMainWindow", "  Current Company : ", nullptr));
        label_10->setText(QApplication::translate("SecondMainWindow", "Work Location : ", nullptr));
        label_11->setText(QApplication::translate("SecondMainWindow", "Native Location : ", nullptr));
        label_12->setText(QApplication::translate("SecondMainWindow", "Education : ", nullptr));
        label_13->setText(QApplication::translate("SecondMainWindow", "Status : ", nullptr));
        label_14->setText(QApplication::translate("SecondMainWindow", "Position : ", nullptr));
        label_15->setText(QApplication::translate("SecondMainWindow", "Stage : ", nullptr));
        pushButtonAdd->setText(QApplication::translate("SecondMainWindow", "Add", nullptr));
        pushButtonShow->setText(QApplication::translate("SecondMainWindow", "Show", nullptr));
        pushButtonSave->setText(QApplication::translate("SecondMainWindow", "Save", nullptr));
        pushButtonClear->setText(QApplication::translate("SecondMainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SecondMainWindow", "Candidate Form", nullptr));
        groupBoxCandidateDetails->setTitle(QString());
        label->setText(QApplication::translate("SecondMainWindow", "Candidate Details", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QApplication::translate("SecondMainWindow", "Username :  ", nullptr));
        labelUserNameDisplay->setText(QString());
        label_5->setText(QApplication::translate("SecondMainWindow", "Role :            ", nullptr));
        labelRoleDisplay->setText(QString());
        label_6->setText(QApplication::translate("SecondMainWindow", "Filter by Status : ", nullptr));
        label_7->setText(QApplication::translate("SecondMainWindow", "Filter by Profile Owner :", nullptr));
        labelPosition->setText(QApplication::translate("SecondMainWindow", "Filter by Positions : ", nullptr));
        labelStage->setText(QApplication::translate("SecondMainWindow", "Sort by Stage :", nullptr));
        groupBox_3->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SecondMainWindow", "Profile Owner", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SecondMainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SecondMainWindow", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SecondMainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SecondMainWindow", "Current Company ", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SecondMainWindow", "Work Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SecondMainWindow", "Native Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("SecondMainWindow", "Education", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("SecondMainWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("SecondMainWindow", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("SecondMainWindow", "Stage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SecondMainWindow", "Candidate Details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SecondMainWindow", "Update Positions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SecondMainWindow", "Open Positions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("SecondMainWindow", "Master Candidate Details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("SecondMainWindow", "User Activity", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("SecondMainWindow", "Assign Applicant", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("SecondMainWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondMainWindow: public Ui_SecondMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDMAINWINDOW_H
