#pragma once

#include <QPainterPath>
#include <QPointF>
#include "SimpleApplication/Point2d.h"
#include "SimpleApplication/AbstractFigure.h"

namespace GUI
{
	//! The class for building a polyline by the points of the figure.
	class PathBuilder
	{
	public:
		//! Constructor.
		PathBuilder();

		~PathBuilder();

		//! Returns a shape.
		std::shared_ptr<SimpleApplication::AbstractFigure> figure() const { return m_figure; }

		//! Sets the shape.
		void setFigure(std::shared_ptr<SimpleApplication::AbstractFigure> figure) { m_figure = figure; }

		//! Construction of a polyline by the points of the figure.
		QPainterPath drawLines() const;

	private:
		//! Converts Point2d to QPointF.
		QPointF convert(SimpleApplication::Point2d point2d) const;

		//! The object in which the vector of points is stored.
		std::shared_ptr<SimpleApplication::AbstractFigure> m_figure;
	};
}