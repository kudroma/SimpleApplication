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

	Widget::connect(m_widget.get(), &Widget::updateFigure, this, &Controller::updateFigure);
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

void Controller::updateFigure()
{
	if (m_figure->name() == "Circle") Controller::updateCircle();

	if (m_figure->name() == "Ellipse") Controller::updateEllipse();

	if (m_figure->name() == "Rectangle") Controller::updateRectangle();

	if (m_figure->name() == "Triangle") Controller::updateTriangle();

	if (m_figure->name() == "RoundedRect") Controller::updateRoundedRect();

	if (m_figure->name() == "Trapeze") Controller::updateTrapeze();

	Controller::loadFigure(m_figure);
}

void GUI::Controller::loadCircle(const SimpleApplication::Circle & circle)
{
	m_widget->showCircle(circle);

	m_widget->setTextLineEdit1(QString("%1").arg(circle.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(circle.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(circle.radius()));

	m_widget->setTextLabelArea(QString("%1").arg(circle.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(circle.perimeter()));
}

void GUI::Controller::loadTriangle(const SimpleApplication::Triangle & triangle)
{
	m_widget->showTriangle(triangle);

	m_widget->setTextLineEdit1(QString("%1").arg(triangle.a().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(triangle.a().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(triangle.b().x()));
	m_widget->setTextLineEdit4(QString("%1").arg(triangle.b().y()));
	m_widget->setTextLineEdit5(QString("%1").arg(triangle.c().x()));
	m_widget->setTextLineEdit6(QString("%1").arg(triangle.c().y()));

	m_widget->setTextLabelArea(QString("%1").arg(triangle.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(triangle.perimeter()));
}

void GUI::Controller::loadRectangle(const SimpleApplication::Rectangle & rectangle)
{
	m_widget->showRectangle(rectangle);

	m_widget->setTextLineEdit1(QString("%1").arg(rectangle.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(rectangle.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(rectangle.width()));
	m_widget->setTextLineEdit4(QString("%1").arg(rectangle.height()));

	m_widget->setTextLabelArea(QString("%1").arg(rectangle.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(rectangle.perimeter()));
}

void GUI::Controller::loadEllipse(const SimpleApplication::Ellipse & ellipse)
{
	m_widget->showEllipse(ellipse);

	m_widget->setTextLineEdit1(QString("%1").arg(ellipse.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(ellipse.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(ellipse.a()));
	m_widget->setTextLineEdit4(QString("%1").arg(ellipse.b()));

	m_widget->setTextLabelArea(QString("%1").arg(ellipse.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(ellipse.perimeter()));
}

void GUI::Controller::loadRoundedRect(const SimpleApplication::RoundedRect & roundedRect)
{
	m_widget->showRoundedRect(roundedRect);

	m_widget->setTextLineEdit1(QString("%1").arg(roundedRect.center().x()));
	m_widget->setTextLineEdit2(QString("%1").arg(roundedRect.center().y()));
	m_widget->setTextLineEdit3(QString("%1").arg(roundedRect.width()));
	m_widget->setTextLineEdit4(QString("%1").arg(roundedRect.height()));
	m_widget->setTextLineEdit5(QString("%1").arg(roundedRect.radius()));

	m_widget->setTextLabelArea(QString("%1").arg(roundedRect.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(roundedRect.perimeter()));
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

	m_widget->setTextLabelArea(QString("%1").arg(trapeze.area()));
	m_widget->setTextLabelPerimeter(QString("%1").arg(trapeze.perimeter()));
}

void GUI::Controller::updateCircle()
{
    using namespace SimpleApplication;

    auto centerX = m_widget->textLineEdit1().toFloat();
    auto centerY = m_widget->textLineEdit2().toFloat();
    auto r = m_widget->textLineEdit3().toFloat();

    m_figure = std::make_shared<Circle>(Point2d(centerX, centerY), r);
}

void GUI::Controller::updateRectangle()
{
	using namespace SimpleApplication;

	auto centerX = m_widget->textLineEdit1().toFloat();
	auto centerY = m_widget->textLineEdit2().toFloat();
	auto w = m_widget->textLineEdit3().toFloat();
	auto h = m_widget->textLineEdit4().toFloat();

	m_figure = std::make_shared<Rectangle>(Point2d(centerX, centerY), w, h);
}

void GUI::Controller::updateEllipse()
{
	using namespace SimpleApplication;

	auto centerX = m_widget->textLineEdit1().toFloat();
	auto centerY = m_widget->textLineEdit2().toFloat();
	auto s = m_widget->textLineEdit3().toFloat();
	auto tss = m_widget->textLineEdit4().toFloat();

	m_figure = std::make_shared<Ellipse>(Point2d(centerX, centerY), s, tss);
}

void GUI::Controller::updateRoundedRect()
{
	using namespace SimpleApplication;

	auto centerX = m_widget->textLineEdit1().toFloat();
	auto centerY = m_widget->textLineEdit2().toFloat();
	auto w = m_widget->textLineEdit3().toFloat();
	auto h = m_widget->textLineEdit4().toFloat();
	auto r = m_widget->textLineEdit5().toFloat();

	m_figure = std::make_shared<RoundedRect>(Point2d(centerX, centerY), w, h, r);
}

void GUI::Controller::updateTrapeze()
{
	using namespace SimpleApplication;

	auto A_x = m_widget->textLineEdit1().toFloat();
	auto A_y = m_widget->textLineEdit2().toFloat();
	auto B_x = m_widget->textLineEdit3().toFloat();
	auto B_y = m_widget->textLineEdit4().toFloat();
	auto C_x = m_widget->textLineEdit5().toFloat();
	auto C_y = m_widget->textLineEdit6().toFloat();
	auto D_x = m_widget->textLineEdit7().toFloat();
	auto D_y = m_widget->textLineEdit8().toFloat();

	m_figure = std::make_shared<Trapeze>(Point2d(A_x, A_y), Point2d(B_x, B_y), Point2d(C_x, C_y), Point2d(D_x, D_y));
}
void Controller::updateTriangle()
{
	using namespace SimpleApplication;

	auto aX = m_widget->textLineEdit1().toFloat();
	auto aY = m_widget->textLineEdit2().toFloat();
	auto bX = m_widget->textLineEdit3().toFloat();
	auto bY = m_widget->textLineEdit4().toFloat();
	auto cX = m_widget->textLineEdit5().toFloat();
	auto cY = m_widget->textLineEdit6().toFloat();

	m_figure = std::make_shared<Triangle>(Point2d(aX, aY), Point2d(bX, bY), Point2d(cX, cY));
}
