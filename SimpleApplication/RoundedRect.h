#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"

namespace SimpleApplication
{
	class  RoundedRect : public AbstractFigure
	{
	public:
		RoundedRect();
		RoundedRect(int id, const Point2d& center, float w, float h, float r);
		~RoundedRect();

		//!  Returns center  of the rounded rect.
		Point2d center() const { return m_center; }

		//! Sets setcenter  of the rounded rect.
		void setCenter(Point2d center) { m_center = center; }

		//!  Returns width  of the rounded rect.
		float width() const { return m_width; }

		//!  Sets width  of the rounded rect.
		void setWidth(float w) { m_width = w; }

		//!  Returns height  of the rounded rect.
		float height() const { return m_height; }

		//! Sets height  of the rounded rect.
		void setHeight(float h) { m_height = h; }

		//!  Returns radius  of the rounded rect.
		float radius() const { return m_radius; }

		//! Sets radius  of the rounded rect.
		void setRadius(float r) { m_radius = r; }

		float perimeter() const override;

		float  area() const override;

		SimpleApplication::BoundingRect boundingRect() const override;

		void print() const override {
			std::cout << "roanded rectangle id = " << id() << " x: " << m_center.x() << " y: " << m_center.y() << " width: " << m_width << " height: " << m_height << " radius of angles: " << m_radius << std::endl;
		}
	private:
		//!  Center  of the rounded rect.
		Point2d m_center;

		//! Width of the rounded rect.
		float m_width = 0.1f;

		//! Height of the rounded rect.
		float m_height = 0.1f;

		//! Radius  of the rounded rect.
		float m_radius = 0.1f;
	};
}

