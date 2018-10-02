#include "AbstractFigure.h"
#include <algorithm>
using namespace SimpleApplication;

AbstractFigure::AbstractFigure()
{
}

AbstractFigure::AbstractFigure(int id) : m_id(id)
{
}

AbstractFigure::~AbstractFigure()
{
}

Point2d AbstractFigure::CenterBoundingRectangle() const
{
	auto points = m_points;
	std::sort(points.begin(), points.end(), [](const Point2d& p1, const Point2d& p2)
	{
		return p1.x() < p2.x();
	});
	auto xMin = points.front().x();
	auto xMax = points.back().x();

	points = m_points;
	std::sort(points.begin(), points.end(), [](const Point2d& p1, const Point2d& p2)
	{
		return p1.y() < p2.y();
	});
	auto yMin = points.front().y();
	auto yMax = points.back().y();
	
	return Point2d((xMax - xMin) / 2 + xMin, (yMax - yMin) / 2 + yMin);
}