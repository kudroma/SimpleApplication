#include "Controller.h"
#include "SimpleApplication/Triangle.h"
#include "SimpleApplication/Rectangle.h"
#include "SimpleApplication/Circle.h"
#include "SimpleApplication/RoundedRect.h"
#include "SimpleApplication/Ellipse.h"
#include "SimpleApplication/Trapeze.h"
#include "SimpleApplication/BoundingRect.h"
#include "SimpleApplication/Point2d.h"
#include "Widget.h"  
#include "SimpleApplication/FigureFactory.h"

using namespace GUI;

Controller::Controller() : QObject()
{
	m_widget = std::make_unique<Widget>(nullptr);
	m_figure = std::make_shared<SimpleApplication::Triangle>();
	m_builder = std::make_unique<PathBuilder>();
    m_widget->show();

	Widget::connect(m_widget.get(), &Widget::comboBoxItemSelected, this, &Controller::createFigure);
}

Controller::~Controller()
{
}

void Controller::drawFigure()
{
	m_builder->setFigure(m_figure);
	const auto painterPath = m_builder->drawLines();
	m_widget->render(painterPath);
}

bool Controller::pointInsideFigure()
{
	return false;
}

void Controller::showFigure()
{
}

void Controller::updateFigure()
{
}

void Controller::createFigure(const QString& text)
{
	if (text == "Rectangle")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::Rectangle);
	}
	if (text == "Triangle")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::Triangle);
	}
	if (text == "Trapeze")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::Trapeze);
	}
	if (text == "Circle")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::Circle);
	}
	if (text == "Ellipse")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::Ellipse);
	}
	if (text == "RoundedRect")
	{
		m_figure = SimpleApplication::FigureFactory::create(SimpleApplication::FigureFactory::Figure::RoundedRect);
	}
	loadFigure(m_figure);
	Controller::drawFigure();
}

void Controller::loadFigure(std::shared_ptr<SimpleApplication::AbstractFigure> figure)
{
	if (figure->name() == "Circle") Controller::loadCircle(*std::static_pointer_cast<SimpleApplication::Circle>(figure));
	
	if (figure->name() == "Ellipse") Controller::loadEllipse(*std::static_pointer_cast<SimpleApplication::Ellipse>(figure));
	
	if (figure->name() == "Rectangle") Controller::loadRectangle(*std::static_pointer_cast<SimpleApplication::Rectangle>(figure));
	
	if (figure->name() == "Triangle") Controller::loadTriangle(*std::static_pointer_cast<SimpleApplication::Triangle>(figure));
	
	if (figure->name() == "RoundedRect") Controller::loadRoundedRect(*std::static_pointer_cast<SimpleApplication::RoundedRect>(figure));
	
	if (figure->name() == "Trapeze") Controller::loadTrapeze(*std::static_pointer_cast<SimpleApplication::Trapeze>(figure));
}

void GUI::Controller::loadCircle(const SimpleApplication::Circle & circle)
{
	m_widget->showCircle(circle);

	m_widget->setTextLineEdit1(QString("%1").arg(circle.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(circle.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(circle.radius()));
}

void GUI::Controller::loadTriangle(const SimpleApplication::Triangle & triangle)
{
	m_widget->showTriangle(triangle);

	//m_widget->setTextLineEdit1(QString("%1").arg(triangle.center().x()));
	//m_widget->setTextLineEdit2(QString("%1").arg(triangle.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(triangle.abSide()));
	m_widget->setTextLineEdit4(QString("%1").arg(triangle.bcSide()));
	m_widget->setTextLineEdit5(QString("%1").arg(triangle.caSide()));
}

void GUI::Controller::loadRectangle(const SimpleApplication::Rectangle & rectangle)
{
	m_widget->showRectangle(rectangle);

	m_widget->setTextLineEdit1(QString("%1").arg(rectangle.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(rectangle.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(rectangle.width()));
	m_widget->setTextLineEdit4(QString("%1").arg(rectangle.height()));
}

void GUI::Controller::loadEllipse(const SimpleApplication::Ellipse & ellipse)
{
	m_widget->showEllipse(ellipse);

	m_widget->setTextLineEdit1(QString("%1").arg(ellipse.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(ellipse.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(ellipse.a()));
	m_widget->setTextLineEdit4(QString("%1").arg(ellipse.b()));
}

void GUI::Controller::loadRoundedRect(const SimpleApplication::RoundedRect & roundedRect)
{
	m_widget->showRoundedRect(roundedRect);

	m_widget->setTextLineEdit1(QString("%1").arg(roundedRect.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(roundedRect.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(roundedRect.width()));
	m_widget->setTextLineEdit4(QString("%1").arg(roundedRect.height()));
	m_widget->setTextLineEdit5(QString("%1").arg(roundedRect.radius()));
}

void GUI::Controller::loadTrapeze(const SimpleApplication::Trapeze & trapeze)
{
	m_widget->showTrapeze(trapeze);

	m_widget->setTextLineEdit1(QString("%1").arg(trapeze.a().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(trapeze.a().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(trapeze.b().x()));
	m_widget->setTextLineEdit4(QString("%1").arg(trapeze.b().y()));
	m_widget->setTextLineEdit5(QString("%1").arg(trapeze.c().x()));
	m_widget->setTextLineEdit6(QString("%1").arg(trapeze.c().y()));
	m_widget->setTextLineEdit7(QString("%1").arg(trapeze.d().x()));
	m_widget->setTextLineEdit8(QString("%1").arg(trapeze.d().y()));
}