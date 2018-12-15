#include "Rectangle.h"

using namespace SimpleApplication;

Rectangle::Rectangle()
{
	m_center = Point2d(20, 18);
	m_width = 10;
	m_height = 3;

	m_name = "Rectangle";
	m_points.reserve(4);
	m_points.push_back(Point2d(m_center.x() - m_width / 2, m_center.y() + m_height / 2));
	m_points.push_back(Point2d(m_center.x() + m_width / 2, m_center.y() + m_height / 2));
	m_points.push_back(Point2d(m_center.x() + m_width / 2, m_center.y() - m_height / 2));
	m_points.push_back(Point2d(m_center.x() - m_width / 2, m_center.y() - m_height / 2));
	/*
	m_points.push_back(Point2d(10, 10));
	m_points.push_back(Point2d(5, 10));
	m_points.push_back(Point2d(5, 5));
	m_points.push_back(Point2d(10, 5));
	*/
}

Rectangle::Rectangle(Point2d point, float width, float height)
	: AbstractFigure(), m_center(point), m_width(width), m_height(height)
{
	m_name = "Rectangle";
	m_points.reserve(4);
	m_points.push_back(Point2d(m_center.x() - m_width / 2, m_center.y() + m_height / 2));
	m_points.push_back(Point2d(m_center.x() + m_width / 2, m_center.y() + m_height / 2));
	m_points.push_back(Point2d(m_center.x() + m_width / 2, m_center.y() - m_height / 2));
	m_points.push_back(Point2d(m_center.x() - m_width / 2, m_center.y() - m_height / 2));
}

Rectangle::~Rectangle()
{
}

float Rectangle::perimeter() const
{
	return 2 * (m_width + m_height);
}

float Rectangle::area() const
{
	return m_width * m_height;
}

BoundingRect Rectangle::boundingBox() const
{
	return BoundingRect(m_center, m_width, m_height);
}