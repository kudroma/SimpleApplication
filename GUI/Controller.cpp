#include "Controller.h"
#include "SimpleApplication/Triangle.h"
#include "SimpleApplication/Point2d.h"

using namespace GUI;

Controller::Controller()
{
	m_widget = std::make_unique<Widget>(nullptr);
	m_figure = std::make_shared<SimpleApplication::Triangle>(2,SimpleApplication::Point2d(2,4),
		SimpleApplication::Point2d(3,5), SimpleApplication::Point2d(7,9));
}

Controller::~Controller()
{
}

void Controller::drawFigure()
{
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
