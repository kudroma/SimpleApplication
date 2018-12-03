#include "FigureFactory.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapeze.h"
#include "Circle.h"
#include "Ellipse.h"
#include "RoundedRect.h"

using namespace SimpleApplication;

FigureFactory::FigureFactory()
{
}

FigureFactory::~FigureFactory()
{
}

std::shared_ptr<AbstractFigure> FigureFactory::create(Figure figure)
{
	switch (figure)
	{
		case Figure::Rectangle:
			return std::make_shared<Rectangle>();
			break;
		case Figure::Triangle:
			return std::make_shared<Triangle>();
			break;
		case Figure::Trapeze:
			return std::make_shared<Trapeze>();
			break;
		case Figure::Circle:
			return std::make_shared<Circle>();
			break;
		case Figure::Ellipse:
			return std::make_shared<Ellipse>();
			break;
		case Figure::RoundedRect:
			return std::make_shared<RoundedRect>();
			break;
		default:
			return std::make_shared<Rectangle>();
			break;
	}
}