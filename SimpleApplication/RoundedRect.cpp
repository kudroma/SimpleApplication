#include "RoundedRect.h"

#define _USE_MATH_DEFINES
#include <math.h>



SimpleApplication::RoundedRect::RoundedRect()
{
}

SimpleApplication::RoundedRect::RoundedRect(int id, const Point2d& center, float w, float h, float r) : AbstractFigure(id), m_w(w), m_h(h), m_r(r), m_center(center)
{
}

SimpleApplication::RoundedRect::~RoundedRect()
{
}

float  SimpleApplication::RoundedRect::perimeter() const
{
	return 2 * (m_w + m_h);
}

float SimpleApplication::RoundedRect::area() const
{
	return m_w * m_h;
}

SimpleApplication::BoundingRect SimpleApplication::RoundedRect::boudingBox() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_w);
	bRect.setHeight(m_h);
	return bRect;
}
