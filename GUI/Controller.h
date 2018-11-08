#pragma once

#include <memory>
#include "SimpleApplication/AbstractFigure.h"
#include <qwidget.h>
#include "Widget.h"

namespace GUI
{
	//! Class connecting GUI and SimpleApplication.
	class Controller
	{
	public:
		//! Constructor.
		Controller();

		~Controller();

		//! Returns color figure.
		QColor color() const { return m_color; }

		//! Sets color figure.
		void setColor(QColor qcolor) { m_color = qcolor; }

		//! Returns line width figure.
		float lineWidth() const { return m_lineWidth; }

		//! Sets line width figure.
		void setLineWidth(float lineWidth) { m_lineWidth = lineWidth; }

		//! Returns smart pointer to the figure.
		std::shared_ptr<SimpleApplication::AbstractFigure> figure() const { return m_figure; }

		//! Sets smart pointer to the figure.
		void setFigure(std::shared_ptr<SimpleApplication::AbstractFigure> figure) { m_figure = figure; }

		//! Draw figure.
		void drawFigure();

		//! Recalculate figure.
		void recalculateFigure();

		//! Is the point inside the figure.
		bool pointInsideFigure();
	
		//! Create figure.
		void createFigure();

		//! Show figure.
		void showFigure();

		//! Update figure.
		void updateFigure();

	private:
		//! View figure.
		QWidget* m_view;

		//! Color figure.
		QColor m_color;

		//! Line width figure.
		float m_lineWidth;

		//! Smart pointer to the figure.
		std::shared_ptr<SimpleApplication::AbstractFigure> m_figure;

		//! Smart pointer to Widget.
		std::unique_ptr<Widget> m_widget;
	};
}