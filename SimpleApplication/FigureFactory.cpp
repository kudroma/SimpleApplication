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

std::shared_ptr<AbstractFigure> FigureFactory::create(Figure figure, ...)
{
	va_list ap;
	va_start(ap, figure);
	switch (figure) {
	case Figure::Rectangle:
		return std::make_shared<Rectangle>(va_arg(ap, Point2d),
			va_arg(ap, float), va_arg(ap, float));
		break;
	case Figure::Triangle:
		return std::make_shared<Triangle>(va_arg(ap, Point2d),
			va_arg(ap, Point2d), va_arg(ap, Point2d));
		break;
	case Figure::Trapeze:
		return std::make_shared<Trapeze>(va_arg(ap, Point2d),
			va_arg(ap, Point2d), va_arg(ap, Point2d), va_arg(ap, Point2d));
		break;
	case Figure::Circle:
		return std::make_shared<Circle>(va_arg(ap, Point2d), va_arg(ap, float));
		break;
	case Figure::Ellipse:
		return std::make_shared<Ellipse>(va_arg(ap, Point2d), va_arg(ap, float),
			va_arg(ap, float));
		break;
	case Figure::RoundedRect:
		return std::make_shared<RoundedRect>(va_arg(ap, Point2d), va_arg(ap, float),
			va_arg(ap, float), va_arg(ap, float));
		break;
	default:
		return std::make_shared<Rectangle>(va_arg(ap, Point2d),
			va_arg(ap, float), va_arg(ap, float));
		break;
	}
	va_end(ap);
}