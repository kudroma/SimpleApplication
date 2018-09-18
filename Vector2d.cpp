#include "stdafx.h"
#include "Vector2d.h"

SimpleApplication::Vector2d::Vector2d()
{
}
SimpleApplication::Vector2d::Vector2d(float x, float y) : m_x(x), m_y(y)
{
}
SimpleApplication::Vector2d::~Vector2d()
{
}
float SimpleApplication::Vector2d::dotProduct(const Vector2d& otherVec) const
{
	return m_x * otherVec.x() + m_y * otherVec.y();
}
float SimpleApplication::Vector2d::crossProduct(const Vector2d& otherVec) const
{
	return m_x * otherVec.y() - m_y * otherVec.x();
}
