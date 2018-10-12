#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"

namespace SimpleApplication
{
	// The Circle class inherits the properties of the AbstractFigure class.
	class Circle : public AbstractFigure
	{
	public:
		Circle();

		Circle(int id, const Point2d& center, float r);

		~Circle();

		float r() const { return m_r; }

		void setR(float r) { m_r = r; }

		//!  Returns center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the bouding rect.
		void setCenter(const Point2d& center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		BoundingRect boudingBox() const override;

		void print() const  override {
			std::cout << "circle id = " << id() << " r: " << m_r
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:
		float m_r = 1.0f;
		Point2d m_center;
	};
}