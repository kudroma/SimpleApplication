#include "Point2d.h"
#include <cmath>

SimpleApplication::Point2d::Point2d()
{
}

SimpleApplication::Point2d::Point2d(float x, float y) : m_x(x), m_y(y)
{
}

SimpleApplication::Point2d::~Point2d()
{
}

float SimpleApplication::Point2d::distanceToPoint(const Point2d& otherPoint) const
{
	return static_cast<float>( std::sqrt( (otherPoint.x() - m_x) * (otherPoint.x() - m_x) + (otherPoint.y() - m_y) * (otherPoint.y() - m_y) ) );
}