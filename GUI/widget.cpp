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

QString Widget::textLineEdit1() const
{
	return ui->lineEdit_1->text();
}

void Widget::setTextLineEdit1(const QString & text)
{
    ui->lineEdit_1->setText(text);
}

QString Widget::textLineEdit2() const
{
	return ui->lineEdit_2->text();
}

void Widget::setTextLineEdit2(const QString & text)
{
	ui->lineEdit_2->setText(text);
}

QString Widget::textLineEdit3() const
{
	return ui->lineEdit_3->text();
}

void Widget::setTextLineEdit3(const QString & text)
{
	ui->lineEdit_3->setText(text);
}

QString Widget::textLineEdit4() const
{
	return ui->lineEdit_4->text();
}

void Widget::setTextLineEdit4(const QString & text)
{
	ui->lineEdit_4->setText(text);

}

void Widget::setTextLineEdit5(const QString & text)
{
	ui->lineEdit_5->setText(text);
}

QString Widget::textLineEdit5() const
{
	return ui->lineEdit_5->text();
}

void Widget::setTextLineEdit6(const QString & text)
{
	ui->lineEdit_6->setText(text);
}

QString Widget::textLineEdit6() const
{
	return ui->lineEdit_6->text();
}
