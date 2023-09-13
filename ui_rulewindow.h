/********************************************************************************
** Form generated from reading UI file 'rulewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULEWINDOW_H
#define UI_RULEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RuleWindow
{
public:
    QPushButton *Back_Button;

    void setupUi(QWidget *RuleWindow)
    {
        if (RuleWindow->objectName().isEmpty())
            RuleWindow->setObjectName(QString::fromUtf8("RuleWindow"));
        RuleWindow->resize(800, 600);
        Back_Button = new QPushButton(RuleWindow);
        Back_Button->setObjectName(QString::fromUtf8("Back_Button"));
        Back_Button->setGeometry(QRect(650, 510, 120, 54));

        retranslateUi(RuleWindow);

        QMetaObject::connectSlotsByName(RuleWindow);
    } // setupUi

    void retranslateUi(QWidget *RuleWindow)
    {
        RuleWindow->setWindowTitle(QCoreApplication::translate("RuleWindow", "Form", nullptr));
        Back_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RuleWindow: public Ui_RuleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULEWINDOW_H
