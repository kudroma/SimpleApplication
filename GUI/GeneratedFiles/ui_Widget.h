/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelFigure;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxFigure;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_1;
    QLineEdit *lineEdit_1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_Area;
    QLabel *labelAreaValue;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_Perimeter;
    QLabel *labelPerimeterValue;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonColor;
    QPushButton *pushButtonUpdateFigure;
    QSpacerItem *verticalSpacer;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(770, 529);
        horizontalLayout_3 = new QHBoxLayout(Widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetFixedSize);
        labelFigure = new QLabel(Widget);
        labelFigure->setObjectName(QStringLiteral("labelFigure"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelFigure->sizePolicy().hasHeightForWidth());
        labelFigure->setSizePolicy(sizePolicy);
        labelFigure->setMinimumSize(QSize(277, 0));
        labelFigure->setMaximumSize(QSize(277, 16777215));
        labelFigure->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(labelFigure);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        comboBoxFigure = new QComboBox(Widget);
        comboBoxFigure->setObjectName(QStringLiteral("comboBoxFigure"));
        sizePolicy.setHeightForWidth(comboBoxFigure->sizePolicy().hasHeightForWidth());
        comboBoxFigure->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBoxFigure);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_2);


        verticalLayout_12->addLayout(verticalLayout_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label_1 = new QLabel(Widget);
        label_1->setObjectName(QStringLiteral("label_1"));
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);
        label_1->setMinimumSize(QSize(133, 0));
        label_1->setMaximumSize(QSize(133, 16777215));
        label_1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_1);

        lineEdit_1 = new QLineEdit(Widget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        sizePolicy.setHeightForWidth(lineEdit_1->sizePolicy().hasHeightForWidth());
        lineEdit_1->setSizePolicy(sizePolicy);
        lineEdit_1->setMaximumSize(QSize(133, 16777215));

        verticalLayout_2->addWidget(lineEdit_1);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(133, 0));
        label_2->setMaximumSize(QSize(133, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMaximumSize(QSize(133, 16777215));

        verticalLayout->addWidget(lineEdit_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(133, 0));
        label_3->setMaximumSize(QSize(133, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMaximumSize(QSize(133, 16777215));

        verticalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(133, 0));
        label_4->setMaximumSize(QSize(133, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(Widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMaximumSize(QSize(133, 16777215));

        verticalLayout_4->addWidget(lineEdit_4);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(133, 0));
        label_5->setMaximumSize(QSize(133, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        lineEdit_5 = new QLineEdit(Widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(133, 0));
        lineEdit_5->setMaximumSize(QSize(133, 16777215));

        verticalLayout_6->addWidget(lineEdit_5);


        gridLayout->addLayout(verticalLayout_6, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(133, 0));
        label_6->setMaximumSize(QSize(133, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        lineEdit_6 = new QLineEdit(Widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(133, 0));
        lineEdit_6->setMaximumSize(QSize(133, 16777215));

        verticalLayout_5->addWidget(lineEdit_6);


        gridLayout->addLayout(verticalLayout_5, 2, 1, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SetFixedSize);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(133, 0));
        label_7->setMaximumSize(QSize(133, 16777215));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_7);

        lineEdit_7 = new QLineEdit(Widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);

        verticalLayout_11->addWidget(lineEdit_7);


        gridLayout->addLayout(verticalLayout_11, 3, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(133, 0));
        label_8->setMaximumSize(QSize(133, 16777215));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_8);

        lineEdit_8 = new QLineEdit(Widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);

        verticalLayout_10->addWidget(lineEdit_8);


        gridLayout->addLayout(verticalLayout_10, 3, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetFixedSize);
        label_Area = new QLabel(Widget);
        label_Area->setObjectName(QStringLiteral("label_Area"));
        sizePolicy.setHeightForWidth(label_Area->sizePolicy().hasHeightForWidth());
        label_Area->setSizePolicy(sizePolicy);
        label_Area->setMinimumSize(QSize(133, 0));
        label_Area->setMaximumSize(QSize(133, 16777215));
        label_Area->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_Area);

        labelAreaValue = new QLabel(Widget);
        labelAreaValue->setObjectName(QStringLiteral("labelAreaValue"));
        sizePolicy.setHeightForWidth(labelAreaValue->sizePolicy().hasHeightForWidth());
        labelAreaValue->setSizePolicy(sizePolicy);
        labelAreaValue->setMinimumSize(QSize(133, 0));
        labelAreaValue->setMaximumSize(QSize(133, 16777215));

        verticalLayout_8->addWidget(labelAreaValue);


        gridLayout->addLayout(verticalLayout_8, 4, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        label_Perimeter = new QLabel(Widget);
        label_Perimeter->setObjectName(QStringLiteral("label_Perimeter"));
        sizePolicy.setHeightForWidth(label_Perimeter->sizePolicy().hasHeightForWidth());
        label_Perimeter->setSizePolicy(sizePolicy);
        label_Perimeter->setMinimumSize(QSize(133, 0));
        label_Perimeter->setMaximumSize(QSize(133, 16777215));
        label_Perimeter->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_Perimeter);

        labelPerimeterValue = new QLabel(Widget);
        labelPerimeterValue->setObjectName(QStringLiteral("labelPerimeterValue"));
        sizePolicy.setHeightForWidth(labelPerimeterValue->sizePolicy().hasHeightForWidth());
        labelPerimeterValue->setSizePolicy(sizePolicy);
        labelPerimeterValue->setMinimumSize(QSize(133, 0));
        labelPerimeterValue->setMaximumSize(QSize(133, 16777215));

        verticalLayout_7->addWidget(labelPerimeterValue);


        gridLayout->addLayout(verticalLayout_7, 4, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButtonColor = new QPushButton(Widget);
        pushButtonColor->setObjectName(QStringLiteral("pushButtonColor"));
        sizePolicy.setHeightForWidth(pushButtonColor->sizePolicy().hasHeightForWidth());
        pushButtonColor->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButtonColor);

        pushButtonUpdateFigure = new QPushButton(Widget);
        pushButtonUpdateFigure->setObjectName(QStringLiteral("pushButtonUpdateFigure"));
        sizePolicy.setHeightForWidth(pushButtonUpdateFigure->sizePolicy().hasHeightForWidth());
        pushButtonUpdateFigure->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButtonUpdateFigure);


        verticalLayout_12->addLayout(horizontalLayout);


        verticalLayout_13->addLayout(verticalLayout_12);

        verticalSpacer = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_13);

        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout_3->addWidget(graphicsView);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelFigure->setText(QApplication::translate("Widget", "Figure", nullptr));
        comboBoxFigure->setCurrentText(QString());
        label_1->setText(QApplication::translate("Widget", "lineEdit_1", nullptr));
        lineEdit_1->setText(QString());
        label_2->setText(QApplication::translate("Widget", "lineEdit_2", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("Widget", "lineEdit_3", nullptr));
        lineEdit_3->setText(QString());
        label_4->setText(QApplication::translate("Widget", "lineEdit_4", nullptr));
        label_5->setText(QApplication::translate("Widget", "lineEdit_5", nullptr));
        label_6->setText(QApplication::translate("Widget", "lineEdit_6", nullptr));
        label_7->setText(QApplication::translate("Widget", "lineEdit_7", nullptr));
        label_8->setText(QApplication::translate("Widget", "lineEdit_8", nullptr));
        label_Area->setText(QApplication::translate("Widget", "Area", nullptr));
        labelAreaValue->setText(QString());
        label_Perimeter->setText(QApplication::translate("Widget", "Perimeter", nullptr));
        labelPerimeterValue->setText(QString());
        pushButtonColor->setText(QApplication::translate("Widget", "Color", nullptr));
        pushButtonUpdateFigure->setText(QApplication::translate("Widget", "Update Figure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
