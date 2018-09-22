#pragma once

#include "BoundingRect.h"

#include <iostream>

namespace SimpleApplication
{
	class AbstractFigure
	{
	public:
		AbstractFigure();

		AbstractFigure(int id);

		~AbstractFigure();

		virtual void print() const { std::cout << "object" << std::endl; }

		int id() const { return m_id; }

		void setId(int id) { m_id = id; }

		virtual float perimeter() = 0;

		virtual float area() = 0;

		virtual BoundingRect bRect() const = 0;

	private:
		int m_id = 0;
	};
}