#include "Circle.h"
#include "AbstractFigure.h"

#define _USE_MATH_DEFINES
#include <math.h>


SimpleApplication::Circle::Circle()
{
}

SimpleApplication::Circle::Circle(int id, const Point2d& center, float r) : AbstractFigure(id), m_radius(r), m_center(center)
{
}

SimpleApplication::Circle::~Circle()
{
}

float  SimpleApplication::Circle::area () const
{
	return m_radius * m_radius * static_cast<float>(M_PI);
}

float  SimpleApplication::Circle::perimeter() const
{
	return 2 * m_radius * static_cast<float>(M_PI);
}


SimpleApplication::BoundingRect SimpleApplication::Circle::boundingRect() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_radius *2);
	bRect.setHeight(m_radius *2);
	return bRect;
}
