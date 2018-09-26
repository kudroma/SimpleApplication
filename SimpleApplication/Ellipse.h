#pragma once

#include "AbstractFigure.h"

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

	float x() const { return m_x; }

	void setX(float x) { m_x = x; }

	float y() const { return m_y; }

	void setY(float y) { m_y = y; }

	float perimeter() const override;

	float area() const override;

	float boundingRect() const override;

	void print() const  override {
		std::cout << "Ellipse id = " << id() << " a: " << m_a << " b: " << m_b
			<< " x: " << m_x << " y: " << m_y << std::endl;
	}
private:
	float m_a = 1.0f;
	float m_b = 1.0f;
	float m_x = 0.0f;
	float m_y = 0.0f;
};
