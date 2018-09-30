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

		//! Returns a of the bounding rect.
		float a() const { return m_a; }

		//! Sets setA of the bounding rect.
		void setA(float a) { m_a = a; }

		//! Returns b of the bounding rect.
		float b() const { return m_b; }

		//! Sets setB of the bounding rect.
		void setB(float b) { m_b = b; }

		//!  Returns Point2d center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the bouding rect.
		void setCenter(Point2d center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		BoundingRect boundingRect() const  override;

		void print() const  override {
			std::cout << "Ellipse  id= " << id() << " a: " << m_a << " b: " << m_b
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:
		//!  Returns  m_a center  of the bounding rect.
		float m_a = 1.0f;

		//!  Returns  m_b center  of the bounding rect.
		float m_b = 1.0f;

		//!  Center  of the bounding rect.
		Point2d m_center;
	};
}
