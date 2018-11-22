#include "Trapeze.h"

using namespace SimpleApplication;

Trapeze::Trapeze(Point2d a, Point2d b, Point2d c, Point2d d)
	: AbstractFigure()
{
	m_points.reserve(4);
	if (a.y() != b.y()) b.setY(a.y());
	if (c.y() != d.y()) d.setY(c.y());
	m_points.push_back(a);
	m_points.push_back(b);
	m_points.push_back(c);
	m_points.push_back(d);
}

Trapeze::~Trapeze()
{
}

float SimpleApplication::Trapeze::abSide() const
{
	return m_points[0].Point2d::distanceToPoint(m_points[1]);
}

float SimpleApplication::Trapeze::bcSide() const
{
	return m_points[1].Point2d::distanceToPoint(m_points[2]);
}

float SimpleApplication::Trapeze::cdSide() const
{
	return m_points[2].Point2d::distanceToPoint(m_points[3]);
}

float SimpleApplication::Trapeze::daSide() const
{
	return m_points[3].Point2d::distanceToPoint(m_points[0]);
}

float Trapeze::perimeter() const
{
	return abSide() + bcSide() + cdSide() + daSide();
}

float Trapeze::area() const
{
	const float p = ((abSide() - cdSide()) * (abSide() - cdSide()) + bcSide() * bcSide() - daSide() * daSide())
		/ (2 * (abSide() - cdSide()));
	const float h = std::sqrtf(bcSide() * bcSide() - p * p);
	return (abSide() + cdSide()) / 2 * h;
}

BoundingRect Trapeze::boundingBox() const
{
	const float p = ((abSide() - cdSide()) * (abSide() - cdSide()) + bcSide() * bcSide() - daSide() * daSide())
		/ (2 * (abSide() - cdSide()));
	const float h = std::sqrtf(bcSide() * bcSide() - p * p);
	return BoundingRect();
}