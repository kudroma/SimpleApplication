#pragma once
#include "AbstractFigure.h"

namespace SimpleApplication
{
	//! The class represents a triangle in 2D space.
	class Triangle : public AbstractFigure
	{
	public:
		//! The constructor creates a triangle from the identifier and the coordinates of the vertices.
		Triangle(int id, Point2d a, Point2d b, Point2d c);

		~Triangle();
		
		//! Returns vertex A of a triangle.
		Point2d a() const { return m_a; }

		//! Sets vertex A of a triangle.
		void setA(const Point2d& a) { m_a = a; }
		
		//! Returns vertex B of a triangle.
		Point2d b() const { return m_b; }

		//! Sets vertex B of a triangle.
		void setB(const Point2d& b) { m_b = b; }
		
		//! Returns vertex C of a triangle.
		Point2d c() const { return m_c; }
		
		//! Sets vertex C of a triangle.
		void setC(const Point2d& c) { m_c = c; }

		//! Returns the length of the side AB of the triangle.
		float abSide() const;

		//! Returns the length of the side BC of the triangle.
		float bcSide() const;

		//! Returns the length of the side CA of the triangle.
		float caSide() const;

		//! The function of displaying the parameters of the triangle.
		void print() const
		{
			std::cout << "triangle: id: " << id();
			std::cout << " a: x: " << m_a.x() << " y: " << m_a.y();
			std::cout << " b: x: " << m_b.x() << " y: " << m_b.y();
			std::cout << " c: x: " << m_c.x() << " y: " << m_c.y() << std::endl;
		}

		//! The function returns the perimeter of the triangle.
		float perimeter() const;

		//! The function returns the area of a triangle.
		float area() const;

		//! The function returns the bounding rectangle of the triangle.
		BoundingRect boundingRect() const;

	private:
		//! Vertex A of a triangle.
		Point2d m_a;

		//! Vertex B of a triangle.
		Point2d m_b;

		//! Vertex C of a triangle.
		Point2d m_c;
	};
}