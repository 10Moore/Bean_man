/********************************************************************************
** Form generated from reading UI file 'ChooseLevel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSELEVEL_H
#define UI_CHOOSELEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseLevel
{
public:
    QPushButton *Back_button;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *LevelButton_1;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *LevelButton_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *LevelButton_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QPushButton *LevelButton_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *ChooseLevel)
    {
        if (ChooseLevel->objectName().isEmpty())
            ChooseLevel->setObjectName(QString::fromUtf8("ChooseLevel"));
        ChooseLevel->resize(800, 600);
        Back_button = new QPushButton(ChooseLevel);
        Back_button->setObjectName(QString::fromUtf8("Back_button"));
        Back_button->setGeometry(QRect(650, 530, 93, 29));
        layoutWidget = new QWidget(ChooseLevel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 741, 501));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        LevelButton_1 = new QPushButton(layoutWidget);
        LevelButton_1->setObjectName(QString::fromUtf8("LevelButton_1"));
        LevelButton_1->setMinimumSize(QSize(70, 140));

        verticalLayout->addWidget(LevelButton_1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        LevelButton_3 = new QPushButton(layoutWidget);
        LevelButton_3->setObjectName(QString::fromUtf8("LevelButton_3"));
        LevelButton_3->setMinimumSize(QSize(80, 160));

        verticalLayout->addWidget(LevelButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        LevelButton_2 = new QPushButton(layoutWidget);
        LevelButton_2->setObjectName(QString::fromUtf8("LevelButton_2"));
        LevelButton_2->setMinimumSize(QSize(80, 160));

        verticalLayout_2->addWidget(LevelButton_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        LevelButton_4 = new QPushButton(layoutWidget);
        LevelButton_4->setObjectName(QString::fromUtf8("LevelButton_4"));
        LevelButton_4->setMinimumSize(QSize(70, 140));

        verticalLayout_2->addWidget(LevelButton_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(ChooseLevel);

        QMetaObject::connectSlotsByName(ChooseLevel);
    } // setupUi

    void retranslateUi(QWidget *ChooseLevel)
    {
        ChooseLevel->setWindowTitle(QCoreApplication::translate("ChooseLevel", "Form", nullptr));
        Back_button->setText(QString());
        LevelButton_1->setText(QString());
        LevelButton_3->setText(QString());
        LevelButton_2->setText(QString());
        LevelButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseLevel: public Ui_ChooseLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSELEVEL_H
