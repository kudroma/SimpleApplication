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

		//! Returns radius of the circle.
		float radius() const { return m_radius; }

		//! Sets radius of the circle.
		void setRadius(float r) { m_radius = r; }

		//!  Returns center  of the circle.
		Point2d center() const { return m_center; }

		//! Sets center  of the circle.
		void setCenter(const Point2d& center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		SimpleApplication::BoundingRect boundingRect() const override;

		void print() const  override {
			std::cout << "circle id = " << id() << " r: " << m_radius
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:

		//! The radius of the circle.
		float m_radius = 1.0f;

		//!  Center  of the circle.
		Point2d m_center;
	};
}