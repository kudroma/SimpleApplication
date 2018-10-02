#pragma once
#include "AbstractFigure.h"

namespace SimpleApplication
{
	//! The class represents a trapeze in 2D space.
	class Trapeze : public AbstractFigure
	{
	public:
		//! The constructor creates a trapeze from the identifier and the coordinates of the vertices.
		Trapeze(int id, Point2d a, Point2d b, Point2d c, Point2d d);

		~Trapeze();

		//! Returns vertex A of a trapeze.
		Point2d a() const { return m_a; }

		//! Sets vertex A of a trapeze.
		void setA(const Point2d& a) { m_a = a; }

		//! Returns vertex B of a trapeze.
		Point2d b() const { return m_b; }

		//! Sets vertex B of a trapeze.
		void setB(const Point2d& b) { m_b = b; }

		//! Returns vertex C of a trapeze.
		Point2d c() const { return m_c; }

		//! Sets vertex C of a trapeze.
		void setC(const Point2d& c) { m_c = c; }
		
		//! Returns vertex D of a trapeze.
		Point2d d() const { return m_d; }

		//! Sets vertex D of a trapeze.
		void setD(const Point2d& d) { m_d = d; }

		//! Returns the length of the side AB of the trapeze.
		float abSide() const;

		//! Returns the length of the side BC of the trapeze.
		float bcSide() const;

		//! Returns the length of the side CD of the trapeze.
		float cdSide() const;

		//! Returns the length of the side DA of the trapeze.
		float daSide() const;

		//! The function of displaying the parameters of the trapeze.
		void print() const
		{
			std::cout << "trapeze: id: " << id();
			std::cout << " a: x: " << m_a.x() << " y: " << m_a.y();
			std::cout << " b: x: " << m_b.x() << " y: " << m_b.y();
			std::cout << " c: x: " << m_c.x() << " y: " << m_c.y();
			std::cout << " d: x: " << m_d.x() << " y: " << m_d.y() << std::endl;
		}

		//! The function returns the perimeter of the trapeze.
		float perimeter() const;

		//! The function returns the area of the trapeze.
		float area() const;

		//! The function returns the bounding rectangle of the trapeze.
		BoundingRect boundingRect() const;

	private:
		//! Vertex A of a trapeze.
		Point2d m_a;
		
		//! Vertex B of a trapeze.
		Point2d m_b;
		
		//! Vertex C of a trapeze.
		Point2d m_c;

		//! Vertex D of a trapeze.
		Point2d m_d;
	};
}