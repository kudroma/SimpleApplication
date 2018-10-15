#include "PathBuilder.h"

using namespace GUI;

PathBuilder::PathBuilder()
{
}

PathBuilder::~PathBuilder()
{
}

QPainterPath* PathBuilder::drawsLines() const
{
	auto painterPath = new QPainterPath();
	
	auto points = m_figure->points();
	for (auto i = 0; i < points.size(); i++)
	{
		if(i == 0) painterPath->moveTo(converter(points[i]));
		else painterPath->lineTo(converter(points[i]));
	}
	
	return painterPath;
}

QPointF PathBuilder::converter(SimpleApplication::Point2d point2d) const
{
	return QPointF(point2d.x(), point2d.y());
}