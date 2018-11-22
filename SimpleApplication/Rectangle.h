#pragma once

#include "AbstractFigure.h"

namespace SimpleApplication
{
	//! The class represents a rectangle in 2D space.
	class Rectangle : public AbstractFigure
	{
	public:
		//! The constructor creates a rectangle by the coordinates of the center, width and height.
		Rectangle(Point2d point, float width, float height);

		~Rectangle();

		//! Returns the width of a rectangle.
		float width() const { return m_width; }

		//! Sets the width of the rectangle.
		void setWidth(float width) { m_width = width; }
		
		//! Returns the height of a rectangle.
		float height() const { return m_height; }

		//! Sets the height of the rectangle.
		void setHeight(float height) { m_height = height; }
		
		//! Returns the coordinates of the center of the rectangle.
		Point2d center() const { return m_center; }
		
		//! Sets the coordinates of the center of the rectangle.
		void setCenter(const Point2d& center) { m_center = center; }
		
		//! Displays rectangle parameters.
		void print() const
		{
			std::cout << "rectangle: width: " << m_width << " height: " << m_height;
			std::cout << " center: x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}

		//! Returns the perimeter of the rectangle.
		float perimeter() const;

		//! Returns the area of a rectangle.
		float area() const;

        //! Returns bounding box of the rectangle.
        BoundingRect boundingBox() const override;
	
	private:
		//! Rectangle width.
		float m_width = 0.0f;

		//! Rectangle height.
		float m_height = 0.0f;
		
		//! Rectangle Center Coordinates.
		Point2d m_center;
	};
}