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

#include "SimpleApplication/Point2d.h"

using namespace GUI;

Controller::Controller()
{
	m_widget = std::make_unique<Widget>(nullptr);
	m_figure = std::make_shared<SimpleApplication::Triangle>(2,SimpleApplication::Point2d(2,4),
		SimpleApplication::Point2d(3,5), SimpleApplication::Point2d(7,9));
	m_builder = std::make_unique<PathBuilder>();
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

void Controller::createFigure()
{
}

void Controller::showFigure()
{
}

void Controller::updateFigure()
{
}

void Controller::loadFigure(std::shared_ptr<SimpleApplication::AbstractFigure> figure)
{
	bool isCircle = std::is_same<SimpleApplication::Circle*, decltype(figure.get())>::value;
	if (isCircle) Controller::loadCircle(*std::static_pointer_cast<SimpleApplication::Circle>(figure));
	
	bool isEllipse = std::is_same<SimpleApplication::Ellipse*, decltype(figure.get())>::value;
	if (isEllipse) Controller::loadEllipse(*std::static_pointer_cast<SimpleApplication::Ellipse>(figure));
	
	bool isRectangle = std::is_same<SimpleApplication::Rectangle*, decltype(figure.get())>::value;
	if (isRectangle) Controller::loadRectangle(*std::static_pointer_cast<SimpleApplication::Rectangle>(figure));
	
	bool isTriangle = std::is_same<SimpleApplication::Triangle*, decltype(figure.get())>::value;
	if (isTriangle) Controller::loadTriangle(*std::static_pointer_cast<SimpleApplication::Triangle>(figure));
	
	bool isRoundedRect = std::is_same<SimpleApplication::RoundedRect*, decltype(figure.get())>::value;
	if (isRoundedRect) Controller::loadRoundedRect(*std::static_pointer_cast<SimpleApplication::RoundedRect>(figure));
	
	//bool isTrapeze = std::is_same<SimpleApplication::Trapeze*, decltype(figure.get())>::value;
	//if (isTrapeze) Controller::loadTrapeze(*std::static_pointer_cast<SimpleApplication::Trapeze>(figure));
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