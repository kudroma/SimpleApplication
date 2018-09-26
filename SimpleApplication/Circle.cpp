#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle()
{
}

Circle::Circle(int id, float r) : AbstractFigure(id), m_r(r)
{
}


Circle::~Circle()
{
}

float Circle::perimeter() const
{
	return 2 * m_r * M_PI;
}

float Circle::area() const 
{
	return m_r * m_r * M_PI;
}

float Circle::boundingRect() const 
{
	return 0.0f;
}
/* 
float Circle::areaBigRectangle()
{
	return 2 * m_r * m_r;
}
*/ 