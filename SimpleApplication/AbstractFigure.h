#pragma once

#include "BoundingRect.h"
#include <iostream>
#include <vector>
#include "Point2d.h"

namespace SimpleApplication
{
    //! Class represents any two-dimensional figure which can be drawn in the SimpleApplication.
    /*!
        In order to create concrete figure subclass this class.
    */
	class AbstractFigure
	{
	public:
		//! Constructor.
		AbstractFigure();

		~AbstractFigure();

        //! Prints general description of the object.
		virtual void print() const { std::cout << "object" << std::endl; }

        //! Returns perimeter of the figure.
		virtual float perimeter() const = 0;

        //! Returns area of the figure.
		virtual float area() const = 0;

		//! Returns bounding rect of the figure.
		virtual BoundingRect boundingBox() const;

		//! Returns whether a point is inside a figure.
		virtual bool pointInside(const Point2d& point) const;
		
        //! Returns the vector of vertex points of the figure.
		std::vector<Point2d> points() const { return m_points; }

	private:
        	
	protected:
		//! Vector in which the vertices of the shape are stored.
		std::vector<Point2d> m_points;
	};
}