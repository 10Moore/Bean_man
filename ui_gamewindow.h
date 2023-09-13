/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *GameWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *Infopanel;
    QVBoxLayout *verticalLayout;
    QLabel *ScoreTitle;
    QLabel *ScoreValue;
    QSpacerItem *verticalSpacer;
    QLabel *BeanTitle;
    QLabel *BeanValue;
    QSpacerItem *verticalSpacer_2;
    QLabel *SuperBeanTitle;
    QProgressBar *SuperBeanValue;
    QSpacerItem *verticalSpacer_3;
    QLabel *SlowDownTitle;
    QProgressBar *SlowDownValue;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Pause_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QString::fromUtf8("gamewindow"));
        gamewindow->resize(841, 600);
        gamewindow->setSizeIncrement(QSize(0, 0));
        gridLayout = new QGridLayout(gamewindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(gamewindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        GameWidget = new QWidget(widget);
        GameWidget->setObjectName(QString::fromUtf8("GameWidget"));
        verticalLayout_2 = new QVBoxLayout(GameWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(570, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout_2->addWidget(GameWidget);

        Infopanel = new QWidget(widget);
        Infopanel->setObjectName(QString::fromUtf8("Infopanel"));
        verticalLayout = new QVBoxLayout(Infopanel);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ScoreTitle = new QLabel(Infopanel);
        ScoreTitle->setObjectName(QString::fromUtf8("ScoreTitle"));

        verticalLayout->addWidget(ScoreTitle);

        ScoreValue = new QLabel(Infopanel);
        ScoreValue->setObjectName(QString::fromUtf8("ScoreValue"));

        verticalLayout->addWidget(ScoreValue);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BeanTitle = new QLabel(Infopanel);
        BeanTitle->setObjectName(QString::fromUtf8("BeanTitle"));

        verticalLayout->addWidget(BeanTitle);

        BeanValue = new QLabel(Infopanel);
        BeanValue->setObjectName(QString::fromUtf8("BeanValue"));

        verticalLayout->addWidget(BeanValue);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        SuperBeanTitle = new QLabel(Infopanel);
        SuperBeanTitle->setObjectName(QString::fromUtf8("SuperBeanTitle"));

        verticalLayout->addWidget(SuperBeanTitle);

        SuperBeanValue = new QProgressBar(Infopanel);
        SuperBeanValue->setObjectName(QString::fromUtf8("SuperBeanValue"));
        SuperBeanValue->setValue(24);

        verticalLayout->addWidget(SuperBeanValue);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        SlowDownTitle = new QLabel(Infopanel);
        SlowDownTitle->setObjectName(QString::fromUtf8("SlowDownTitle"));

        verticalLayout->addWidget(SlowDownTitle);

        SlowDownValue = new QProgressBar(Infopanel);
        SlowDownValue->setObjectName(QString::fromUtf8("SlowDownValue"));
        SlowDownValue->setValue(24);

        verticalLayout->addWidget(SlowDownValue);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget_4 = new QWidget(Infopanel);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Pause_button = new QPushButton(widget_4);
        Pause_button->setObjectName(QString::fromUtf8("Pause_button"));

        horizontalLayout->addWidget(Pause_button);

        horizontalSpacer = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Back_button = new QPushButton(widget_4);
        Back_button->setObjectName(QString::fromUtf8("Back_button"));

        horizontalLayout->addWidget(Back_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout_2->addWidget(Infopanel);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "Form", nullptr));
        ScoreTitle->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#aaffff;\">Score</span></p></body></html>", nullptr));
        ScoreValue->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        BeanTitle->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#aaffff;\">Bean</span></p></body></html>", nullptr));
        BeanValue->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        SuperBeanTitle->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#aaffff;\">Super Bean</span></p></body></html>", nullptr));
        SlowDownTitle->setText(QCoreApplication::translate("gamewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#aaffff;\">Slowness</span></p></body></html>", nullptr));
        Pause_button->setText(QString());
        Back_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
