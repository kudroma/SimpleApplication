#include "stdafx.h"
#include "BoundingRect.h"


BoundingRect::BoundingRect()
{
}
#include "Rectangle.h"
#define _USE_MATH_DEFINES
#include <math.h>



Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int id, float w, float h): AbstractGeometryPrimitive(id), m_w(w), m_h(h)
{
}

Rectangle::~Rectangle()
{
}

float Rectangle::perimeter()
{
	return 2 * (m_w + m_h);
}

float Rectangle::area()
{
	return m_w * m_h;
}



