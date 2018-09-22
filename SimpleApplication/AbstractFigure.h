#pragma once

#include "BoundingRect.h"

#include <iostream>

namespace SimpleApplication
{
    //! Class represents any two-dimensional figure which can be drawn in the SimpleApplication.
    /*!
        In order to create concrete figure subclass this class.
    */
	class AbstractFigure
	{
	public:
		AbstractFigure();

        //! Constructor from identifier.
		AbstractFigure(int id);

		~AbstractFigure();

        //! Prints general description of the object.
		virtual void print() const { std::cout << "object" << std::endl; }

        //! Returns identifier of the figure.
		int id() const { return m_id; }

        //! Sets identifier of the figure.
		void setId(int id) { m_id = id; }

        //! Returns perimeter of the figure.
		virtual float perimeter() = 0;

        //! Returns area of the figure.
		virtual float area() = 0;

        //! Returns bounding rect of the figure.
		virtual BoundingRect boundingRect() const = 0;

	private:
        //! Identifier of the figure.
		int m_id = 0;
	};
}