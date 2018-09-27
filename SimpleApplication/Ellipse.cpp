#include "Ellipse.h"

#define _USE_MATH_DEFINES
#include <math.h> 
#include <random>


SimpleApplication::Ellipse::Ellipse()
{
}

SimpleApplication::Ellipse::Ellipse(int id, float a, float b) : AbstractFigure(id), m_a(a), m_b(b)
{
}


SimpleApplication::Ellipse::~Ellipse()
{
}

float SimpleApplication::Ellipse::perimeter() const
{
	return 4 * (M_PI*m_a*m_b + m_a - m_b) / (m_a + m_b);
}

float SimpleApplication::Ellipse::area() const
{

	return m_a * m_b * M_PI;
}
SimpleApplication::BoundingRect SimpleApplication::Ellipse::boundingRect() const
{
	SimpleApplication::BoundingRect myObject;
	myObject.setCenter(m_center);
	myObject.setWidth(m_a);
	myObject.setHeight(m_b);
	return myObject;
}


