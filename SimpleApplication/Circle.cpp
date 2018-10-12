#include "Circle.h"
#include "AbstractFigure.h"

#define _USE_MATH_DEFINES
#include <math.h>


SimpleApplication::Circle::Circle()
{

}

SimpleApplication::Circle::Circle(int id, const Point2d& center, float r) : AbstractFigure(id), m_r(r), m_center(center)
{

}

SimpleApplication::Circle::~Circle()
{

}

float  SimpleApplication::Circle::area () const
{
	return m_r * m_r * static_cast<float>(M_PI);
}

float  SimpleApplication::Circle::perimeter() const
{
	return 2 * m_r * static_cast<float>(M_PI);
}


SimpleApplication::BoundingRect SimpleApplication::Circle::boudingBox() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_r*2);
	bRect.setHeight(m_r*2);
	return bRect;
}
