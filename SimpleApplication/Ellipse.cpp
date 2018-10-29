#include "Ellipse.h"

#define _USE_MATH_DEFINES
#include <math.h> 
#include <random>

using namespace SimpleApplication;

SimpleApplication::Ellipse::Ellipse()
{
}

SimpleApplication::Ellipse::Ellipse(int id, const Point2d & center, float a, float b, float angle)
	: AbstractFigure(id), m_center(center), m_a(a), m_b(b), m_angle(angle) // angle in degrees (угол в градусах)
{
	int indexI = 0;

	while (m_angle*indexI<360)
	{
		auto point = PointInArc(m_angle, indexI);
		m_points.push_back(point);
		indexI++;
	}
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

Point2d Ellipse::PointInArc(float t, int indexPoint) const // t - angle in degrees (угол в градусах)
{
	Point2d pointVar;
	pointVar.setX(m_center.x + m_a * cos(M_PI / 2 - indexPoint * t*M_PI/180));
	pointVar.setY(m_center.y + m_b * sin(M_PI / 2 - indexPoint * t*M_PI/180));
	return pointVar;
}