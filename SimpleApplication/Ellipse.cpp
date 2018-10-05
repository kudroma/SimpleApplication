#include "Ellipse.h"

#define _USE_MATH_DEFINES
#include <math.h> 
#include <random>


SimpleApplication::Ellipse::Ellipse()
{
}

SimpleApplication::Ellipse::Ellipse(int id, const Point2d& center, float a, float b) : AbstractFigure(id), m_a(a), m_b(b), m_center(center)
{
}


SimpleApplication::Ellipse::~Ellipse()
{
}

float SimpleApplication::Ellipse::perimeter() const
{
	return 4 * (static_cast<float>(M_PI) * m_a * m_b + m_a - m_b) / (m_a + m_b);
}

float SimpleApplication::Ellipse::area() const
{

	return m_a * m_b * static_cast<float>(M_PI);
}
SimpleApplication::BoundingRect SimpleApplication::Ellipse::boundingRect() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_a);
	bRect.setHeight(m_b);
	return bRect;
}


