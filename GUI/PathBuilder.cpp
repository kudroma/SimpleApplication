#include "PathBuilder.h"

using namespace GUI;

PathBuilder::PathBuilder()
{
}

PathBuilder::~PathBuilder()
{
}

QPainterPath PathBuilder::drawLines() const
{
	auto painterPath = new QPainterPath();
	
	auto points = m_figure->points();
	
	painterPath->moveTo(convert(points[0]));

	for (auto i = 1; i < points.size(); i++) painterPath->lineTo(convert(points[i]));
	
	return *painterPath;
}

QPointF PathBuilder::convert(SimpleApplication::Point2d point2d) const
{
	return QPointF(point2d.x(), point2d.y());
}