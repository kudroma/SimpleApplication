#include "Trapeze.h"
using namespace SimpleApplication;

Trapeze::Trapeze(int id, Point2d a, Point2d b, Point2d c, Point2d d)
	: AbstractFigure(id), m_a(a), m_b(b), m_c(c), m_d(d)
{
	m_points.reserve(4);
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
	return m_a.Point2d::distanceToPoint(m_b);
}

float SimpleApplication::Trapeze::bcSide() const
{
	return m_b.Point2d::distanceToPoint(m_c);
}

float SimpleApplication::Trapeze::cdSide() const
{
	return m_c.Point2d::distanceToPoint(m_d);
}

float SimpleApplication::Trapeze::daSide() const
{
	return m_d.Point2d::distanceToPoint(m_a);
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

BoundingRect Trapeze::boundingRect() const
{
	const float p = ((abSide() - cdSide()) * (abSide() - cdSide()) + bcSide() * bcSide() - daSide() * daSide())
		/ (2 * (abSide() - cdSide()));
	const float h = std::sqrtf(bcSide() * bcSide() - p * p);
	return BoundingRect(CenterBoundingRectangle(), abSide(), h);
}