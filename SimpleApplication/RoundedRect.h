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

		//!  Returns center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets setcenter  of the bouding rect.
		void setCenter(Point2d center) { m_center = center; }

		//!  Returns w  of the bounding rect.
		float w() const { return m_w; }

		//!  Sets center  of the bounding rect.
		void setW(float w) { m_w = w; }

		//!  Returns h  of the bounding rect.
		float h() const { return m_h; }

		//! Sets height  of the bouding rect.
		void setH(float h) { m_h = h; }

		//!  Returns r  of the bounding rect.
		float r() const { return m_r; }

		//! Sets setR center  of the bouding rect.
		void setR(float r) { m_r = r; }

		float perimeter() const override;

		float  area() const override;

		SimpleApplication::BoundingRect boundingRect() const override;

		void print() const override {
			std::cout << "roanded rectangle id = " << id() << " x: " << m_center.x() << " y: " << m_center.y() << " width: " << m_w << " height: " << m_h << " radius of angles: " << m_r << std::endl;
		}
	private:
		//! Point2d  m_center of the center.
		Point2d m_center;

		//! M_w  of the center.
		float m_w = 0.1f;

		//! M_h of the center.
		float m_h = 0.1f;

		//! M_r  of the center.
		float m_r = 0.1f;
	};
}

