#include "Widget.h"
#include <qcolordialog.h>
#include <QGraphicsItem>
#include <QComboBox>

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

	connect(ui->comboBoxFigure, QOverload<const QString &>::of(&QComboBox::currentIndexChanged),
		this, &Widget::comboBoxItemSelected);

	connect(ui->pushButtonUpdateFigure, &QPushButton::clicked,
		this, &Widget::updateFigure);
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

void Widget::setTextLabel7(const QString & text)
{
	ui->label_7->setText(text);
}

void Widget::setTextLabel8(const QString & text)
{
	ui->label_8->setText(text);
}

void Widget::setTextLabelArea(const QString & text)
{
	ui->label_AreaVal->setText(text);
}

void Widget::setTextLabelPerimeter(const QString & text)
{
	ui->label_PerimeterVal->setText(text);
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

void Widget::setVisibleLabel7(bool visible)
{
	ui->label_7->setVisible(visible);
}

void Widget::setVisibleLabel8(bool visible)
{
	ui->label_8->setVisible(visible);
}

void Widget::setVisibleLabelAreaVal(bool visible)
{
	ui->label_AreaVal->setVisible(visible);
}

void Widget::setVisibleLabelPerimeterVal(bool visible)
{
	ui->label_PerimeterVal->setVisible(visible);
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

void Widget::render(const QPainterPath& path)
{
	m_path = path;
	auto scene = new QGraphicsScene();
	QPen pen;
	pen.setWidthF(0.1);
	pen.setColor(m_color);
	QBrush brush;
	brush.setColor(m_color);
	brush.setStyle(Qt::BrushStyle::SolidPattern);
	auto item = static_cast<QGraphicsItem*>(scene->addPath(path, pen, brush));
	ui->graphicsView->setScene(scene);
	ui->graphicsView->fitInView(scene->sceneRect().left() * 2, scene->sceneRect().top() * 2,
		scene->sceneRect().width() * 2, scene->sceneRect().height() * 2); 
	ui->graphicsView->fitInView(scene->sceneRect().left() * 2, scene->sceneRect().top() * 2,
		scene->sceneRect().width() * 2, scene->sceneRect().height() * 2, Qt::AspectRatioMode::KeepAspectRatio);	


}

QString Widget::textLineEdit6() const
{
	return ui->lineEdit_6->text();
}

void Widget::setTextLineEdit7(const QString & text)
{
	ui->lineEdit_7->setText(text);
}

QString Widget::textLineEdit7() const
{
	return ui->lineEdit_7->text();
}

void Widget::setTextLineEdit8(const QString & text)
{
	ui->lineEdit_8->setText(text);
}

QString Widget::textLineEdit8() const
{
	return ui->lineEdit_8->text();
}

void Widget::updateFigure()
{
}

void Widget::setFigureColor()
{
	m_color = QColorDialog::getColor();
	render(m_path);
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

void Widget::setVisiblelineEdit_7(bool visible)
{
	ui->lineEdit_7->setVisible(visible);
}

void Widget::setVisiblelineEdit_8(bool visible)
{
	ui->lineEdit_8->setVisible(visible);
}

// Parameter for the triangle.
void Widget::showTriangle(const SimpleApplication::Triangle & triangle)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(true);
	setVisibleLabel4(true);
	setVisiblelineEdit_5(true);
	setVisibleLabel5(true);
	setVisiblelineEdit_6(false);
	setVisibleLabel6(false);
	setVisiblelineEdit_7(false);
	setVisibleLabel7(false);
	setVisiblelineEdit_8(false);
	setVisibleLabel8(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("length of side ab");
	setTextLabel4("length of side bc");
	setTextLabel5("length of side ca");
}

// Parameter for the rectangle.
void Widget::showRectangle(const SimpleApplication::Rectangle & rectangle)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(true);
	setVisibleLabel4(true);
	setVisiblelineEdit_5(false);
	setVisibleLabel5(false);
	setVisiblelineEdit_6(false);
	setVisibleLabel6(false);
	setVisiblelineEdit_7(false);
	setVisibleLabel7(false);
	setVisiblelineEdit_8(false);
	setVisibleLabel8(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("width");
	setTextLabel4("height");
}

// Parameter for the circle.
void Widget::showCircle(const SimpleApplication::Circle & circle)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(false);
	setVisibleLabel4(false);
	setVisiblelineEdit_5(false);
	setVisibleLabel5(false);
	setVisiblelineEdit_6(false);
	setVisibleLabel6(false);
	setVisiblelineEdit_7(false);
	setVisibleLabel7(false);
	setVisiblelineEdit_8(false);
	setVisibleLabel8(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("radius");
}

// Parameter for the ellipse.
void Widget::showEllipse(const SimpleApplication::Ellipse & ellipse)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(true);
	setVisibleLabel4(true);
	setVisiblelineEdit_5(false);
	setVisibleLabel5(false);
	setVisiblelineEdit_6(false);
	setVisibleLabel6(false);
	setVisiblelineEdit_7(false);
	setVisibleLabel7(false);
	setVisiblelineEdit_8(false);
	setVisibleLabel8(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("semiaxis ");
	setTextLabel4("the second semiaxis");
}

// Parameter for the roundedRect.
void Widget::showRoundedRect(const SimpleApplication::RoundedRect & roundedRect)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(true);
	setVisibleLabel4(true);
	setVisiblelineEdit_5(true);
	setVisibleLabel5(true);
	setVisiblelineEdit_6(false);
	setVisibleLabel6(false);
	setVisiblelineEdit_7(false);
	setVisibleLabel7(false);
	setVisiblelineEdit_8(false);
	setVisibleLabel8(false);

	setTextLabel1("center x");
	setTextLabel2("center y");
	setTextLabel3("width");
	setTextLabel4("height");
	setTextLabel5("radius");
}

// Parameter for the trapeze.
void Widget::showTrapeze(const SimpleApplication::Trapeze & trapeze)
{
	setVisiblelineEdit_1(true);
	setVisibleLabel1(true);
	setVisiblelineEdit_2(true);
	setVisibleLabel2(true);
	setVisiblelineEdit_3(true);
	setVisibleLabel3(true);
	setVisiblelineEdit_4(true);
	setVisibleLabel4(true);
	setVisiblelineEdit_5(true);
	setVisibleLabel5(true);
	setVisiblelineEdit_6(true);
	setVisibleLabel6(true);
	setVisiblelineEdit_7(true);
	setVisibleLabel7(true);
	setVisiblelineEdit_8(true);
	setVisibleLabel8(true);

	setTextLabel1("coord A(x)");
	setTextLabel2("coord A(y)");
	setTextLabel3("coord B(x)");
	setTextLabel4("coord B(y)");
	setTextLabel5("coord C(x)");
	setTextLabel6("coord C(y)");
	setTextLabel7("coord D(x)");
	setTextLabel8("coord D(y)");
}