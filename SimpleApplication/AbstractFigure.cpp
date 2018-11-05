#include "AbstractFigure.h"
#include <algorithm>
#include "Vector2d.h"

#define _USE_MATH_DEFINES
#include <math.h>

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

BoundingRect AbstractFigure::boundingBox() const
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

	return BoundingRect(Point2d((xMax - xMin) / 2 + xMin, (yMax - yMin) / 2 + yMin), xMax - xMin, yMax - yMin);
}

bool AbstractFigure::pointInside(const Point2d & point) const
{
	float sumPhi = 0;
	int lastItemNumber = m_points.size() - 1;
	for (int i = 1; i <= lastItemNumber; i++)
	{
		float unsignedAngle = std::acosf(Vector2d(point, m_points[i - 1]).dotProduct(Vector2d(point, m_points[i])) /
			(point.distanceToPoint(m_points[i - 1]) * point.distanceToPoint(m_points[i])));
		if (Vector2d(point, m_points[i - 1]).crossProduct(Vector2d(point, m_points[i])) >= 0)
			sumPhi += unsignedAngle;	else sumPhi -= unsignedAngle;
	}

	float unsignedAngle = std::acosf(Vector2d(point, m_points[lastItemNumber]).dotProduct(Vector2d(point, m_points[0])) /
		(point.distanceToPoint(m_points[lastItemNumber]) * point.distanceToPoint(m_points[0])));
	if (Vector2d(point, m_points[lastItemNumber]).crossProduct(Vector2d(point, m_points[0])) >= 0)
		sumPhi += unsignedAngle;	else sumPhi -= unsignedAngle;
	
	auto epsilon = 1e-3f;
	if (std::fabsf(sumPhi - 2 * static_cast<float>(M_PI)) < epsilon) return true;	else return false;
}
