#pragma once
#include <iostream>

#include "AbstractFigure.h"

class BoundingRect : public AbstractFigure
{
public:
	BoundingRect();

	BoundingRect(int id, float x, float y, float l1, float l2);

	~BoundingRect();

	float l1() const { return m_l1; }
	void setL1(float l1) { m_l1 = l1; }

	float l2() const { return m_l2; }
	void setL2(float l2) { m_l2 = l2; }

	float x() const { return m_x; }
	void setX(float x) { m_x = x; }

	float y() const { return m_y; }
	void setY(float y) { m_y = y; }

	float perimeter() override;

	float area() override;

	float areaBigRectangle() override;

	void print() const override {
		std::cout << "Bounding Rect id = " << id() << " | l1: " << m_l1 << " l2: " << m_l2
			<< " x: " << m_x << " y: " << m_y << std::endl;
	}

private:
	float m_l1 = 0.1f;
	float m_l2 = 0.1f;
	float m_x = 0.0f;
	float m_y = 0.0f;
};

