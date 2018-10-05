#pragma once

#include <memory>
#include "AbstractFigure.h"
#include <cstdarg>

namespace SimpleApplication
{
	/*! 
		The class represents a factory for creating shapes.
		The number of parameters must exactly match the number of arguments that go to the constructor of the corresponding class.
	*/
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
		static std::shared_ptr<AbstractFigure> create(Figure figure, ...);
	};
}