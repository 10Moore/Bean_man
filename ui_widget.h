/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *StackedWidget;
    QWidget *main_page;
    QWidget *gridLayoutWidget;
    QGridLayout *Middle_layout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *WidgetGif1;
    QLabel *WidgetGif2;
    QLabel *WidgetGif3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *Down_layout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Start_button;
    QPushButton *Rule_button;
    QPushButton *Exit_button;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *Top_layout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Title;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        StackedWidget = new QStackedWidget(Widget);
        StackedWidget->setObjectName(QString::fromUtf8("StackedWidget"));
        StackedWidget->setGeometry(QRect(0, 0, 801, 601));
        main_page = new QWidget();
        main_page->setObjectName(QString::fromUtf8("main_page"));
        gridLayoutWidget = new QWidget(main_page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 130, 801, 101));
        Middle_layout = new QGridLayout(gridLayoutWidget);
        Middle_layout->setSpacing(0);
        Middle_layout->setObjectName(QString::fromUtf8("Middle_layout"));
        Middle_layout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        WidgetGif1 = new QLabel(gridLayoutWidget);
        WidgetGif1->setObjectName(QString::fromUtf8("WidgetGif1"));
        WidgetGif1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(WidgetGif1);

        WidgetGif2 = new QLabel(gridLayoutWidget);
        WidgetGif2->setObjectName(QString::fromUtf8("WidgetGif2"));
        WidgetGif2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(WidgetGif2);

        WidgetGif3 = new QLabel(gridLayoutWidget);
        WidgetGif3->setObjectName(QString::fromUtf8("WidgetGif3"));
        WidgetGif3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(WidgetGif3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        Middle_layout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(main_page);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 230, 801, 371));
        Down_layout = new QHBoxLayout(horizontalLayoutWidget);
        Down_layout->setObjectName(QString::fromUtf8("Down_layout"));
        Down_layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Down_layout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Start_button = new QPushButton(horizontalLayoutWidget);
        Start_button->setObjectName(QString::fromUtf8("Start_button"));
        Start_button->setAutoRepeatDelay(300);

        verticalLayout_2->addWidget(Start_button);

        Rule_button = new QPushButton(horizontalLayoutWidget);
        Rule_button->setObjectName(QString::fromUtf8("Rule_button"));

        verticalLayout_2->addWidget(Rule_button);

        Exit_button = new QPushButton(horizontalLayoutWidget);
        Exit_button->setObjectName(QString::fromUtf8("Exit_button"));

        verticalLayout_2->addWidget(Exit_button);


        Down_layout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Down_layout->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_4 = new QWidget(main_page);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 0, 801, 131));
        Top_layout = new QHBoxLayout(horizontalLayoutWidget_4);
        Top_layout->setObjectName(QString::fromUtf8("Top_layout"));
        Top_layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Top_layout->addItem(horizontalSpacer_5);

        Title = new QLabel(horizontalLayoutWidget_4);
        Title->setObjectName(QString::fromUtf8("Title"));

        Top_layout->addWidget(Title);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Top_layout->addItem(horizontalSpacer_6);

        StackedWidget->addWidget(main_page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        StackedWidget->addWidget(page_2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        WidgetGif1->setText(QString());
        WidgetGif2->setText(QString());
        WidgetGif3->setText(QString());
        Start_button->setText(QString());
        Rule_button->setText(QString());
        Exit_button->setText(QString());
        Title->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:700; font-style:italic; color:#aaffff;\">Bean man</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
