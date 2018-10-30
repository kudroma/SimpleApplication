#include "Widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setTextLabel1(const QString & text)
{
    ui->label_1->setText(text);
}

void Widget::setTextLineEdit1(const QString & text)
{
    ui->lineEdit_1->setText(text);
}
