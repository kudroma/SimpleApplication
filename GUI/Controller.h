#pragma once

#include <memory>
#include "SimpleApplication/AbstractFigure.h"
#include <qwidget.h>
#include "Widget.h"
#include "PathBuilder.h"

#include "SimpleApplication/Triangle.h"
#include "SimpleApplication/Rectangle.h"
#include "SimpleApplication/Circle.h"
#include "SimpleApplication/RoundedRect.h"
#include "SimpleApplication/Ellipse.h"
#include "SimpleApplication/Trapeze.h"
#include "SimpleApplication/BoundingRect.h"

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

		//! Draws figure.
		void drawFigure();

		//! Is the point inside the figure.
		bool pointInsideFigure();
	
		//! Creates figure.
		void createFigure();

		//! Shows figure.
		void showFigure();

		//! Updates figure.
		void updateFigure();

	private:

		//! Loads a circle into the user interface.
		void loadCircle(const SimpleApplication::Circle&circle);

		//! Loads a triangle into the user interface.
		void loadTriangle(const SimpleApplication::Triangle&triangle);

		//! Loads a rectangle into the user interface.
		void loadRectangle(const SimpleApplication::Rectangle&rectangle);

		//! Loads a ellipse into the user interface.
		void loadEllipse(const SimpleApplication::Ellipse&ellipse);

		//! Loads a roundedRect into the user interface.
		void loadRoundedRect(const SimpleApplication::RoundedRect&roundedRect);

		//! Loads a trapeze into the user interface.
		void loadTrapeze(const SimpleApplication::Trapeze&trapeze);
	
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

		//! Smart pointer to PathBuilder.
		std::unique_ptr<PathBuilder> m_builder;
	};
}