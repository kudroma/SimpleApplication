#include "RoundedRect.h"

#define _USE_MATH_DEFINES
#include <math.h>



SimpleApplication::RoundedRect::RoundedRect()
{
}

SimpleApplication::RoundedRect::RoundedRect(int id, const Point2d& center, float w, float h, float r) : AbstractFigure(id), m_width(w), m_height(h), m_radius(r), m_center(center)
{
}

SimpleApplication::RoundedRect::~RoundedRect()
{
}

float  SimpleApplication::RoundedRect::perimeter() const
{
	return 2 * (m_width + m_height);
}

float SimpleApplication::RoundedRect::area() const
{
	return m_width * m_height;
}

SimpleApplication::BoundingRect SimpleApplication::RoundedRect::boundingRect() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_width);
	bRect.setHeight(m_height);
	return bRect;
}
