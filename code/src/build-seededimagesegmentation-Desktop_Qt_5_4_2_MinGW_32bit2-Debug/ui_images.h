/********************************************************************************
** Form generated from reading UI file 'images.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGES_H
#define UI_IMAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mousepos.h>

QT_BEGIN_NAMESPACE

class Ui_images
{
public:
    mousePos *imgShow;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *boxSeeds;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbBG;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QPushButton *btnDone;
    QLabel *mouseLocation;

    void setupUi(QDialog *images)
    {
        if (images->objectName().isEmpty())
            images->setObjectName(QStringLiteral("images"));
        images->resize(440, 200);
        images->setMinimumSize(QSize(440, 200));
        imgShow = new mousePos(images);
        imgShow->setObjectName(QStringLiteral("imgShow"));
        imgShow->setGeometry(QRect(10, 80, 118, 19));
        imgShow->setMouseTracking(true);
        imgShow->setFrameShape(QFrame::Box);
        widget = new QWidget(images);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 421, 64));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        boxSeeds = new QGroupBox(widget);
        boxSeeds->setObjectName(QStringLiteral("boxSeeds"));
        verticalLayout = new QVBoxLayout(boxSeeds);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbBG = new QRadioButton(boxSeeds);
        rbBG->setObjectName(QStringLiteral("rbBG"));

        horizontalLayout->addWidget(rbBG);

        rb1 = new QRadioButton(boxSeeds);
        rb1->setObjectName(QStringLiteral("rb1"));

        horizontalLayout->addWidget(rb1);

        rb2 = new QRadioButton(boxSeeds);
        rb2->setObjectName(QStringLiteral("rb2"));

        horizontalLayout->addWidget(rb2);

        rb3 = new QRadioButton(boxSeeds);
        rb3->setObjectName(QStringLiteral("rb3"));

        horizontalLayout->addWidget(rb3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(boxSeeds);

        btnDone = new QPushButton(widget);
        btnDone->setObjectName(QStringLiteral("btnDone"));

        horizontalLayout_2->addWidget(btnDone);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        mouseLocation = new QLabel(widget);
        mouseLocation->setObjectName(QStringLiteral("mouseLocation"));

        horizontalLayout_3->addWidget(mouseLocation);


        retranslateUi(images);

        QMetaObject::connectSlotsByName(images);
    } // setupUi

    void retranslateUi(QDialog *images)
    {
        images->setWindowTitle(QApplication::translate("images", "Setup Seeds", 0));
        imgShow->setText(QApplication::translate("images", "IMAGE TO SEED", 0));
        boxSeeds->setTitle(QApplication::translate("images", "Seeds", 0));
        rbBG->setText(QApplication::translate("images", "BG", 0));
        rb1->setText(QApplication::translate("images", "1", 0));
        rb2->setText(QApplication::translate("images", "2", 0));
        rb3->setText(QApplication::translate("images", "3", 0));
        btnDone->setText(QApplication::translate("images", "Run", 0));
        mouseLocation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class images: public Ui_images {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGES_H
