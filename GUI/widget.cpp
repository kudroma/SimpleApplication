#include "Widget.h"
#include <qcolordialog.h>

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

	connect(ui->pushButtonColor, &QPushButton::clicked, this, &Widget::setFigureColor);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setTextLabel1(const QString & text)
{
	ui->label_1->setText(text);
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

QString Widget::textLineEdit1() const
{
	return ui->lineEdit_1->text();
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

void Widget::render(const QPainterPath& path)
{
	auto scene = new QGraphicsScene();
	scene->addPath(path);
	ui->graphicsView->setScene(scene);
}

QString Widget::textLineEdit6() const
{
	return ui->lineEdit_6->text();
}

void Widget::setFigureColor()
{
	m_color = QColorDialog::getColor();
}

void Widget::setVisiblelineEdit_1(bool visible)
{
	ui->lineEdit_1->setVisible(visible);
}

void Widget::setVisiblelineEdit_2(bool visible)
{
	ui->lineEdit_2->setVisible(visible);
}

void Widget::setVisiblelineEdit_3(bool visible)
{
	ui->lineEdit_3->setVisible(visible);
}

void Widget::setVisiblelineEdit_4(bool visible)
{
	ui->lineEdit_4->setVisible(visible);
}

void Widget::setVisiblelineEdit_5(bool visible)
{
	ui->lineEdit_5->setVisible(visible);
}

void Widget::setVisiblelineEdit_6(bool visible)
{
	ui->lineEdit_6->setVisible(visible);
}

// Parameter for the triangle.
void Widget::showTriangle(const SimpleApplication::Triangle & triangle)
{
	setVisiblelineEdit_6(false);
	
	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("length of side a");
	setTextLabel4("length of side b");
	setTextLabel5("length of side c");
}

// Parameter for the rectangle.
void Widget::showRectangle(const SimpleApplication::Rectangle & rectangle)
{
	setVisiblelineEdit_5(false);
	setVisiblelineEdit_6(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("width");
	setTextLabel4("height");
}

// Parameter for the circle.
void Widget::showCircle(const SimpleApplication::Circle & circle)
{
	setVisiblelineEdit_4(false);
	setVisiblelineEdit_5(false);
	setVisiblelineEdit_6(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("radius");
}

// Parameter for the ellipse.
void Widget::showEllipse(const SimpleApplication::Ellipse & ellipse)
{
	setVisiblelineEdit_5(false);
	setVisiblelineEdit_6(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("semiaxis ");
	setTextLabel4("the second semiaxis");
}

// Parameter for the roundedRect.
void Widget::showRoundedRect(const SimpleApplication::RoundedRect & roundedRect)
{
	setVisiblelineEdit_6(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("width");
	setTextLabel4("height");
	setTextLabel5("radius");
}

// Parameter for the trapeze.
void Widget::showTrapeze(const SimpleApplication::Trapeze & trapeze)
{

}