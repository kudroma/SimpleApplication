#pragma once

#include "AbstractFigure.h"

// The Circle class inherits the properties of the AbstractFigure class.
class Circle : public SimpleApplication::AbstractFigure 
{
public:
	Circle();

	Circle(int id, float r);

	~Circle();

	float r() const { return m_r; }

	void setR(float r) { m_r = r; }

	float x() const { return m_x; }

	void setX(float x) { m_x = x; }

	float y() const { return m_y; }

	void setY(float y) { m_y = y; }

	float perimeter() const override;

	float area() const override;

	float  boundingRect() const override;

	void print() const  override {
		std::cout << "circle id = " << id() << " r: " << m_r
			<< " x: " << m_x << " y: " << m_y << std::endl;
	}
private:
	float m_r = 1.0f;
	float m_x = 0.0f;
	float m_y = 0.0f;
};