#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"

namespace SimpleApplication
{
	class  RaoundedRectangle : public SimpleApplication::AbstractFigure
	{
	public:
		RaoundedRectangle();
		RaoundedRectangle(int id, float w, float h, float r);
		~RaoundedRectangle();

		//!  Returns center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the bouding rect.
		void setCenter(Point2d center) { m_center = center; }

		float w() const { return m_w; }
		void setW(float w) { m_w = w; }

		float h() const { return m_h; }
		void setH(float h) { m_h = h; }

		float r() const { return m_r; }
		void setR(float r) { m_r = r; }

		float const  perimeter() override;

		float const area() override;

		SimpleApplication::BoundingRect boundingRect() const override;

		void print() const override {
			std::cout << "roanded rectangle id = " << id() << " x: " << m_center.x() << " y: " << m_center.y() << " width: " << m_w << " height: " << m_h << " radius of angles: " << m_r << std::endl;
		}
	private:
		Point2d m_center;
		float m_w = 0.1f;
		float m_h = 0.1f;
		float m_r = 0.1f;
	};
}

