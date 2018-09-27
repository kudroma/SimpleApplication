#include "RaoundedRectangle.h"

#define _USE_MATH_DEFINES
#include <math.h>



SimpleApplication::RaoundedRectangle::RaoundedRectangle()
{
}

SimpleApplication::RaoundedRectangle::RaoundedRectangle(int id, float w, float h, float r) : AbstractFigure(id), m_w(w), m_h(h), m_r(r)
{
}

SimpleApplication::RaoundedRectangle::~RaoundedRectangle()
{
}

float const SimpleApplication::RaoundedRectangle::perimeter()
{
	return 2 * (m_w + m_h);
}

float const SimpleApplication::RaoundedRectangle::area()
{
	return m_w * m_h;
}

SimpleApplication::BoundingRect SimpleApplication::RaoundedRectangle::boundingRect() const
{
	SimpleApplication::BoundingRect myObject;
	myObject.setCenter(m_center);
	myObject.setWidth(m_w);
	myObject.setHeight(m_h);
	return myObject;
}
