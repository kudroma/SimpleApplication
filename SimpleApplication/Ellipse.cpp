#include "Ellipse.h"

#define _USE_MATH_DEFINES
#include <math.h> 


Ellipse::Ellipse()
{
}

Ellipse::Ellipse(int id, float a, float b) : AbstractFigure(id), m_a(a), m_b(b)
{
}


Ellipse::~Ellipse()
{
}

float Ellipse::perimeter() const 
{
	return 4 * (M_PI*m_a*m_b + m_a - m_b) / (m_a + m_b);
}

float Ellipse::area() const 
{
	return m_a * m_b * M_PI;
}

float Ellipse::boundingRect()
{
	return 4 * m_a * m_b;
}
