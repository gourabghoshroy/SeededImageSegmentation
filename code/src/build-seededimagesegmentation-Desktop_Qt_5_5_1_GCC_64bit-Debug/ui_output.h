/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_output
{
public:
    QLabel *label;

    void setupUi(QDialog *output)
    {
        if (output->objectName().isEmpty())
            output->setObjectName(QStringLiteral("output"));
        output->resize(288, 200);
        output->setMinimumSize(QSize(220, 200));
        label = new QLabel(output);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(output);

        QMetaObject::connectSlotsByName(output);
    } // setupUi

    void retranslateUi(QDialog *output)
    {
        output->setWindowTitle(QApplication::translate("output", "Segmentation Result", 0));
        label->setText(QApplication::translate("output", "SEGMENTATION RESULTS", 0));
    } // retranslateUi

};

namespace Ui {
    class output: public Ui_output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
