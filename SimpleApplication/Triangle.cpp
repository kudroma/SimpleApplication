#include "Triangle.h"

using namespace SimpleApplication;

Triangle::Triangle(int id, Point2d a, Point2d b, Point2d c)
	: AbstractFigure(id)
{
	m_points.reserve(3);
	m_points.push_back(a);
	m_points.push_back(b);
	m_points.push_back(c);
}

Triangle::~Triangle()
{
}

float Triangle::abSide() const
{
	return m_points[0].Point2d::distanceToPoint(m_points[1]);
}

float Triangle::bcSide() const
{
	return m_points[1].Point2d::distanceToPoint(m_points[2]);
}

float Triangle::caSide() const
{
	return m_points[2].Point2d::distanceToPoint(m_points[0]);
}

float Triangle::perimeter() const
{
	return abSide() + bcSide() + caSide();
}

float Triangle::area() const
{
	const float p = (abSide() + bcSide() + caSide()) / 2.0f;
	const float par = p * (p - abSide()) * (p - bcSide()) * (p - caSide());
	if (par > 0) return std::sqrtf(par); else return 0;
}

void Triangle::center() const
{

}
