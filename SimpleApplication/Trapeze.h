#pragma once

#include "AbstractFigure.h"

namespace SimpleApplication
{
	//! The class represents a trapeze in 2D space.
	class Trapeze : public AbstractFigure
	{
	public:
		//! The constructor creates a trapeze the coordinates of the vertices.
		Trapeze(Point2d a, Point2d b, Point2d c, Point2d d);

		~Trapeze();

		//! Returns vertex A of a trapeze.
		Point2d a() const { return m_points[0]; }

		//! Sets vertex A of a trapeze.
		void setA(const Point2d& a) { m_points[0] = a; }

		//! Returns vertex B of a trapeze.
		Point2d b() const { return m_points[1]; }

		//! Sets vertex B of a trapeze.
		void setB(const Point2d& b) { m_points[1] = b; }

		//! Returns vertex C of a trapeze.
		Point2d c() const { return m_points[2]; }

		//! Sets vertex C of a trapeze.
		void setC(const Point2d& c) { m_points[2] = c; }
		
		//! Returns vertex D of a trapeze.
		Point2d d() const { return m_points[3]; }

		//! Sets vertex D of a trapeze.
		void setD(const Point2d& d) { m_points[3] = d; }

		//! Returns the length of the side AB of the trapeze.
		float abSide() const;

		//! Returns the length of the side BC of the trapeze.
		float bcSide() const;

		//! Returns the length of the side CD of the trapeze.
		float cdSide() const;

		//! Returns the length of the side DA of the trapeze.
		float daSide() const;

		//! Displays trapeze parameters.
		void print() const
		{
			std::cout << "trapeze:";
			std::cout << " a: x: " << m_points[0].x() << " y: " << m_points[0].y();
			std::cout << " b: x: " << m_points[1].x() << " y: " << m_points[1].y();
			std::cout << " c: x: " << m_points[2].x() << " y: " << m_points[2].y();
			std::cout << " d: x: " << m_points[3].x() << " y: " << m_points[3].y() << std::endl;
		}

		//! Returns the perimeter of the trapeze.
		float perimeter() const;

		//! Returns the area of the trapeze.
		float area() const;

        //! Returns bounding box of the trapeze.
        BoundingRect boundingBox() const override;
	};
}