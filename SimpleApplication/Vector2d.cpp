#include "Vector2d.h"

using namespace SimpleApplication;

Vector2d::Vector2d()
{
}

Vector2d::Vector2d(float x, float y) : m_x(x), m_y(y)
{
}

Vector2d::Vector2d(Point2d a, Point2d z)
{
	m_x = z.x() - a.x();
	m_y = z.y() - a.y();
}

Vector2d::~Vector2d()
{
}

float Vector2d::dotProduct(const Vector2d& otherVec) const
{
	return m_x * otherVec.x() + m_y * otherVec.y();
}

float Vector2d::crossProduct(const Vector2d& otherVec) const
{
	return m_x * otherVec.y() - m_y * otherVec.x();
}
