#include "Widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::Widget)
{
    ui->setupUi(this);
	ui->comboBoxFigure->addItem(QString("Rectangle"));
	ui->comboBoxFigure->addItem(QString("Triangle"));
	ui->comboBoxFigure->addItem(QString("Trapeze"));
	ui->comboBoxFigure->addItem(QString("Circle"));
	ui->comboBoxFigure->addItem(QString("Ellipse"));
	ui->comboBoxFigure->addItem(QString("RoundedRect"));
}

Widget::~Widget()
{
    delete ui;
}

QString Widget::textLineEdit1() const
{
	return ui->lineEdit_1->text();
}

void Widget::setTextLabel2(const QString & text)
{
	ui->label_2->setText(text);
}

void Widget::setTextLabel3(const QString & text)
{
	ui->label_3->setText(text);
}

void Widget::setTextLabel4(const QString & text)
{
	ui->label_4->setText(text);
}

void Widget::setTextLabel5(const QString & text)
{
	ui->label_5->setText(text);
}

void Widget::setTextLabel6(const QString & text)
{
	ui->label_6->setText(text);
}

void Widget::setVisibleLabel1(bool visible)
{
	ui->label_1->setVisible(visible);
}

void Widget::setVisibleLabel2(bool visible)
{
	ui->label_2->setVisible(visible);
}

void Widget::setVisibleLabel3(bool visible)
{
	ui->label_3->setVisible(visible);
}

void Widget::setVisibleLabel4(bool visible)
{
	ui->label_4->setVisible(visible);
}

void Widget::setVisibleLabel5(bool visible)
{
	ui->label_5->setVisible(visible);
}

void Widget::setVisibleLabel6(bool visible)
{
	ui->label_6->setVisible(visible);
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
