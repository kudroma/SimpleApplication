#define _USE_MATH_DEFINES

#include "stdafx.h"
#include "BoundingRect.h"

BoundingRect::BoundingRect()
{
}

BoundingRect::BoundingRect(int id, float x, float y, float l1, float l2) : AbstractFigure(id), m_x(x), m_y(y), m_l1(l1), m_l2(l2)
{
}

BoundingRect::~BoundingRect()
{
}

float BoundingRect::perimeter()
{
	return (m_l1 + m_l2) * 2;
}


float BoundingRect::area()
{
	return m_l1 * m_l2;
}

float BoundingRect::areaBigRectangle()
{
	return  m_l1 * m_l2;
}