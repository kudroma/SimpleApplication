#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"

namespace SimpleApplication
{
       //! //! The class represents an rounded rect.
	   /*!
	  Rectangle has the following parameters:
	   \li have angle radius;
	   \li width of the rounded rect ;
	   \li height of the rounded rect.
	   \li center of the rounded rect.
	   */
	class  RoundedRect : public AbstractFigure
	{
	public:
		//! Default constructor.
		RoundedRect();

		//! Constructs  rounded rect from coordinates of center, width, height, radius.
		RoundedRect(const Point2d& center, float w, float h, float r);

		~RoundedRect();

		//!  Returns center  of the rounded rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the rounded rect.
		void setCenter(Point2d center) { m_center = center; }

		//!  Returns width  of the rounded rect.
		float width() const { return m_width; }

		//!  Sets width  of the rounded rect.
		void setWidth(float w) { m_width = w; }

		//!  Returns height  of the rounded rect.
		float height() const { return m_height; }

		//! Sets height  of the rectangle.
		void setHeight(float h) { m_height = h; }

		//!  Returns the radius of the corners of the rounded rect.
		float radius() const { return m_radius; }

		//! Sets  the radius of the corners of the rounded rect.
		void setRadius(float r) { m_radius = r; }

		float perimeter() const override;

		float  area() const override;

		BoundingRect boundingBox() const override;

		void print() const override {
			std::cout << "roanded rectangle x: " << m_center.x() << " y: " << m_center.y() << 
			" width: " << m_width << " height: " << m_height << " radius of angles: " <<
			m_radius << std::endl;
		}
	private:
		//!  Center  of the rectangle.
		Point2d m_center;

		//! Width of the rectangle.
		float m_width = 0.1f;

		//! Height of the rectangle.
		float m_height = 0.1f;

		//! The radius of the corners of the rectangle.
		float m_radius = 0.1f;
	};
}