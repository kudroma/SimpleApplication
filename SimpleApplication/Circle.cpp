#include "Circle.h"
#include "AbstractFigure.h"

#define _USE_MATH_DEFINES
#include <math.h>


SimpleApplication::Circle::Circle()
{
}

SimpleApplication::Circle::Circle(int id, float r) : AbstractFigure(id), m_r(r)
{
}

SimpleApplication::Circle::~Circle()
{
}

float const SimpleApplication::Circle::area()
{
	return m_r * m_r * M_PI;
}

float const SimpleApplication::Circle::perimeter()
{
	return 2 * m_r * M_PI;
}


SimpleApplication::BoundingRect SimpleApplication::Circle::boundingRect() const
{
	SimpleApplication::BoundingRect myObject;
	myObject.setCenter(m_center);
	myObject.setWidth(m_r*2);
	myObject.setHeight(m_r*2);
	return myObject;
}
