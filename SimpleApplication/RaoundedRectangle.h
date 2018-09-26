#pragma once

#include "AbstractFigure.h"


class  RaoundedRectangle : public SimpleApplication::AbstractFigure
{
public:
	RaoundedRectangle();
	RaoundedRectangle(int id, float w, float h, float r);
	~RaoundedRectangle();

	float x() const { return m_x; }
	void setX(float x) { m_x = x; }

	float y() const { return m_y; }
	void setY(float y) { m_y = y; }

	float w() const { return m_w; }
	void setW(float w) { m_w = w; }

	float h() const { return m_h; }
	void setH(float h) { m_h = h; }

	float r() const { return m_r; }
	void setR(float r) { m_r = r; }

	float perimeter() override;

	float area() override;

	float boundingRect() override;

	void print() const override {
		std::cout << "roanded rectangle id = " << id() << " x: " << m_x << " y: " << m_y << " width: " << m_w << " height: " << m_h << " radius of angles: "<< m_r << std::endl;
	}
private:
	float m_x = 0.0f;
	float m_y = 0.0f;
	float m_w = 0.1f;
	float m_h = 0.1f;
	float m_r = 0.1f;
};

