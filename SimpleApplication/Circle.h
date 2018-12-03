#pragma once

#include "AbstractFigure.h"
#include "Point2d.h"

namespace SimpleApplication
{
	//! The class represents an circle.
	/*!
	Circle has the following parameters:
	\li radius of the circle;
	\li center of the circle.
	*/
	// The Circle class inherits the properties of the AbstractFigure class.
	class Circle : public AbstractFigure
	{
	public:
		//! Default constructor.
		Circle();

		Circle(Point2d circleCenter, float radius);

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

		BoundingRect boundingBox() const override;

		//! Returns whether a point is inside a circle.
		bool pointInside(const Point2d& point) const override;

		void print() const  override {
			std::cout << "circle r: " << m_radius
				<< " x: " << m_center.x() << " y: " << m_center.y() << std::endl;
		}
	private:

		//! The radius of the circle.
		float m_radius = 1.0f;

		//! The angle a[i] and a[i+1]
		float m_angle = 10.0f;

		//!  Center  of the circle.
		Point2d m_center;

		// Coordinats point a[i]
		Point2d coordinatesPointAtAngle(float anglePointAi, int indexAi) const;
	};
}