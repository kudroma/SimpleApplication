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
		virtual float perimeter() const = 0;

        //! Returns area of the figure.
		virtual float area() const = 0;

		//! Returns bounding rect of the figure.
		virtual BoundingRect boudingBox() const;

		//! Returns whether a point is inside a figure.
		virtual bool pointInside(const Point2d& point) const;
		
        //! Returns the vector of vertex points of the figure.
		std::vector<Point2d> points() const { return m_points; }

	private:
        //! Identifier of the figure.
		int m_id = 0;
	
	protected:
		//! Vector in which the vertices of the shape are stored.
		std::vector<Point2d> m_points;
	};
}