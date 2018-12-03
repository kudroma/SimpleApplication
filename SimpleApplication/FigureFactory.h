#pragma once

#include <memory>
#include "AbstractFigure.h"
#include <cstdarg>

namespace SimpleApplication
{
	//! The class represents a factory for creating shapes.
	class FigureFactory
	{
	public:
		FigureFactory();

		~FigureFactory();

		//! Enumeration of available figures.
		enum class Figure
		{
			Rectangle,
			Triangle,
			Trapeze,
			Circle,
			Ellipse,
			RoundedRect
		};

		//! Creates a specific object of the shape and returns it.
		static std::shared_ptr<AbstractFigure> create(Figure figure);
	};
}