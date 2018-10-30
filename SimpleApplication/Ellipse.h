#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"


namespace SimpleApplication
{
	//! The class represents an ellipse.
	/*!
	    Ellipse has the following parameters:
		\li a semiaxis of the ellipse.;
		\li b the second semiaxis of the ellipse.
		\li center of the ellipse
	*/
	class Ellipse : public  AbstractFigure
	{
	public:
		Ellipse();

		//! Constructs ellipse from coordinates of the center, semi-axis and second semi-axis.
		Ellipse(int id, const Point2d& center, float a, float b, float angle);

		~Ellipse();

		//! Returns semiaxis of the ellipse.
		float a() const { return m_a; }

		//! Sets semiaxis of the ellipse.
		void setA(float a) { m_a = a; }

		//! Returns the second semiaxis of the ellipse.
		float b() const { return m_b; }

		//! Sets  the second semiaxisof the ellipse.
		void setB(float b) { m_b = b; }

		//!  Returns the center of the ellipse
		Point2d center() const { return m_center; }

		//! Sets center  of the ellipse.
		void setCenter(Point2d center) { m_center = center; }

		virtual float  perimeter() const override;

		virtual float  area() const override;

		BoundingRect boudingBox() const  override;

		void print() const  override {
			std::cout << "Ellipse  id= " << id() << " a: " << m_a << " b: " << m_b
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:

		//!  Semiaxis of the ellipse.
		float m_a = 1.0f;

		//!  The second semiaxis of the ellipse.
		float m_b = 1.0f;

		//! The angle of the ellipse. Angle in degrees (угол в градусах)
		float m_angle = 10.0f;
		
		// Coordinats point a[i]
		Point2d PointInArc(float anglePointAi, int indexAi) const;
		 
		//!  Center  of the ellipse.
		Point2d m_center;
	};
}