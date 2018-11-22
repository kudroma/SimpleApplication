#include "Circle.h"
#include "Point2d.h"
#include "AbstractFigure.h"


#define _USE_MATH_DEFINES
#include <math.h>

using namespace SimpleApplication;

Circle::Circle(Point2d circleCenter, float radius)
	: AbstractFigure(), m_center(circleCenter), m_radius(radius)
{
	int indexI = 0;

	while (m_angle*indexI < 360)
	{
		auto point = coordinatesPointAtAngle(m_angle, indexI);
		m_points.push_back(point);
		indexI++;
    }
}

Circle::~Circle()
{

}

float Circle::area() const
{
	return m_radius * m_radius * static_cast<float>(M_PI);
}

float Circle::perimeter() const
{
	return 2 * m_radius * static_cast<float>(M_PI);
}

BoundingRect Circle::boundingBox() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_radius * 2);
	bRect.setHeight(m_radius * 2);
	return bRect;
}

Point2d Circle::coordinatesPointAtAngle(float anglePointA, int indexAi) const
{
	auto x = m_center.x() + m_radius * sin(indexAi*anglePointA);
	auto y = m_center.y() + m_radius * cos(indexAi*anglePointA);
	Point2d pointTemp;
	pointTemp.setX(x);
	pointTemp.setY(y);
	return pointTemp;
}

bool SimpleApplication::Circle::pointInside(const Point2d& point) const
{
	if (point.distanceToPoint(m_center) <= m_radius) return true;
	else return false;
}
