/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRAABID;
    QWidget *centralWidget;
    QLabel *label;
    QToolButton *btnBrowse;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(318, 250);
        actionRAABID = new QAction(MainWindow);
        actionRAABID->setObjectName(QStringLiteral("actionRAABID"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 241, 61));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(14);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        btnBrowse = new QToolButton(centralWidget);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setGeometry(QRect(70, 170, 171, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 277, 62));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rb1 = new QRadioButton(groupBox_2);
        rb1->setObjectName(QStringLiteral("rb1"));

        horizontalLayout->addWidget(rb1);

        rb2 = new QRadioButton(groupBox_2);
        rb2->setObjectName(QStringLiteral("rb2"));

        horizontalLayout->addWidget(rb2);

        rb3 = new QRadioButton(groupBox_2);
        rb3->setObjectName(QStringLiteral("rb3"));

        horizontalLayout->addWidget(rb3);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        label->raise();
        btnBrowse->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Software Engineering Project", 0));
        actionRAABID->setText(QApplication::translate("MainWindow", "RAABID", 0));
        label->setText(QApplication::translate("MainWindow", "SEEDED IMAGE SEGMENTATION", 0));
        btnBrowse->setText(QApplication::translate("MainWindow", "Start Segmentation....", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Number of Segmented Regions:-", 0));
        rb1->setText(QApplication::translate("MainWindow", "2", 0));
        rb2->setText(QApplication::translate("MainWindow", "3", 0));
        rb3->setText(QApplication::translate("MainWindow", "4", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
