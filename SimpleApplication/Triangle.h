#pragma once

#include "AbstractFigure.h"

namespace SimpleApplication
{
	//! The class represents a triangle in 2D space.
	class Triangle : public AbstractFigure
	{
	public:
		//! Default constructor.
		Triangle();

		//! The constructor creates a triangle the coordinates of the vertices.
		Triangle(Point2d a, Point2d b, Point2d c);

		~Triangle();
		
		//! Returns vertex A of a triangle.
		Point2d a() const { return m_points[0]; }

		//! Sets vertex A of a triangle.
		void setA(const Point2d& a) { m_points[0] = a; }
		
		//! Returns vertex B of a triangle.
		Point2d b() const { return m_points[1]; }

		//! Sets vertex B of a triangle.
		void setB(const Point2d& b) { m_points[1] = b; }
		
		//! Returns vertex C of a triangle.
		Point2d c() const { return m_points[2]; }
		
		//! Sets vertex C of a triangle.
		void setC(const Point2d& c) { m_points[2] = c; }

		//! Returns the length of the side AB of the triangle.
		float abSide() const;

		//! Returns the length of the side BC of the triangle.
		float bcSide() const;

		//! Returns the length of the side CA of the triangle.
		float caSide() const;

		//! Displays triangle parameters.
		void print() const
		{
			std::cout << "triangle:";
			std::cout << " a: x: " << m_points[0].x() << " y: " << m_points[0].y();
			std::cout << " b: x: " << m_points[1].x() << " y: " << m_points[1].y();
			std::cout << " c: x: " << m_points[2].x() << " y: " << m_points[2].y() << std::endl;
		}

		//! Returns the perimeter of the triangle.
		float perimeter() const;

		//! Returns the area of a triangle.
		float area() const;

		//! Returns the center of the triangle.
		Point2d center() const;

	private:
		
	};
}