#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"


namespace SimpleApplication
{
	class Ellipse : public  AbstractFigure
	{
	public:
		Ellipse();

		Ellipse(int id, const Point2d& center, float a, float b);

		~Ellipse();

		//! Returns a of the ellipse.
		float a() const { return m_a; }

		//! Sets setA of the ellipse.
		void setA(float a) { m_a = a; }

		//! Returns b of the ellipse.
		float b() const { return m_b; }

		//! Sets setB of the ellipse.
		void setB(float b) { m_b = b; }

		//!  Returns the center of the ellipse
		Point2d center() const { return m_center; }

		//! Sets center  of the ellipse.
		void setCenter(Point2d center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		BoundingRect boundingRect() const  override;

		void print() const  override {
			std::cout << "Ellipse  id= " << id() << " a: " << m_a << " b: " << m_b
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:
		//!  Semiaxis of the ellipse.
		float m_a = 1.0f;

		//!  The second semiaxis of the ellipse.
		float m_b = 1.0f;

		//!  Center  of the ellipse.
		Point2d m_center;
	};
}
