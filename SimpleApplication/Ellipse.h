#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"


namespace SimpleApplication
{
	class Ellipse : public  SimpleApplication::AbstractFigure
	{
	public:
		Ellipse();

		Ellipse(int id, float a, float b);

		~Ellipse();

		float a() const { return m_a; }

		void setA(float a) { m_a = a; }

		float b() const { return m_b; }

		void setB(float b) { m_b = b; }

		//!  Returns center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the bouding rect.
		void setCenter(Point2d center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		BoundingRect const boundingRect()  override;

		void print() const  override {
			std::cout << "Ellipse  id= " << id() << " a: " << m_a << " b: " << m_b
				<< " x: " << m_center.x << " y: " << m_center.y << std::endl;
		}
	private:
		float m_a = 1.0f;
		float m_b = 1.0f;
		Point2d m_center;
	};
}
