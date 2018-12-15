#include "RoundedRect.h"

#define _USE_MATH_DEFINES
#include <math.h>

using namespace SimpleApplication;

RoundedRect::RoundedRect()
{
	m_center = Point2d(23, 22);
	m_width = 5;
	m_height = 15;
	m_radius = 6;

	m_name = "RoundedRect";
	m_points.reserve(8);
	/*
	m_points.push_back(Point2d(19, 10));
	m_points.push_back(Point2d(6, 10));
	m_points.push_back(Point2d(5, 9));
	m_points.push_back(Point2d(5, 6));
	m_points.push_back(Point2d(6, 5));
	m_points.push_back(Point2d(19, 5));
	m_points.push_back(Point2d(20, 6));
	m_points.push_back(Point2d(20, 9));
	*/
	Point2d pointTemp;

	// Coordinates point 1ts
	auto x = m_center.x() - m_width / 2 + m_radius;
	auto y = m_center.y() - m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 2ts
	x = m_center.x() - m_width / 2;
	y = m_center.y() - m_height / 2 + m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 3ts
	x = m_center.x() - m_width / 2;
	y = m_center.y() + m_width / 2 - m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 4ts
	x = m_center.x() - m_width / 2 + m_radius;
	y = m_center.y() + m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 5ts
	x = m_center.x() + m_width / 2 - m_radius;
	y = m_center.y() + m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 6ts
	x = m_center.x() + m_width / 2;
	y = m_center.y() + m_width / 2 - m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 7ts
	x = m_center.x() + m_width / 2;
	y = m_center.y() - m_height / 2 + m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 8ts
	x = m_center.x() + m_width / 2 - m_radius;
	y = m_center.y() - m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);
}

RoundedRect::RoundedRect(const Point2d& center, float w, float h, float r)
	: AbstractFigure(), m_width(w), m_height(h), m_radius(r), m_center(center)
{
	m_name = "RoundedRect";
	m_points.reserve(8);

	Point2d pointTemp;

	// Coordinates point 1ts
	auto x = m_center.x() - m_width / 2 + m_radius;
	auto y = m_center.y() - m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 2ts
	x = m_center.x() - m_width / 2;
	y = m_center.y() - m_height / 2 + m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 3ts
	x = m_center.x() - m_width / 2;
	y = m_center.y() + m_width / 2 - m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 4ts
	x = m_center.x() - m_width / 2 + m_radius;
	y = m_center.y() + m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 5ts
	x = m_center.x() + m_width / 2 - m_radius;
	y = m_center.y() + m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 6ts
	x = m_center.x() + m_width / 2;
	y = m_center.y() + m_width / 2 - m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 7ts
	x = m_center.x() + m_width / 2;
	y = m_center.y() - m_height / 2 + m_radius;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);

	// Coordinates point 8ts
	x = m_center.x() + m_width / 2 - m_radius;
	y = m_center.y() - m_height / 2;
	pointTemp.setX(x);
	pointTemp.setY(y);
	m_points.push_back(pointTemp);
}

RoundedRect::~RoundedRect()
{
}

float  SimpleApplication::RoundedRect::perimeter() const
{
	return 2 * (m_width + m_height);
}

float SimpleApplication::RoundedRect::area() const
{
	return m_width * m_height;
}

BoundingRect RoundedRect::boundingBox() const
{
	SimpleApplication::BoundingRect bRect;
	bRect.setCenter(m_center);
	bRect.setWidth(m_width);
	bRect.setHeight(m_height);
	return bRect;
}