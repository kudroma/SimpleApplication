#pragma once

#include <iostream>

namespace SimpleApplication
{
	class BoundingRect
	{
	public:
		BoundingRect();

		BoundingRect(float x, float y, float l1, float l2);

		~BoundingRect();

		float l1() const { return m_width; }
		void setL1(float l1) { m_width = l1; }

		float l2() const { return m_l2; }
		void setL2(float l2) { m_l2 = l2; }

		float x() const { return m_x; }
		void setX(float x) { m_x = x; }

		float y() const { return m_y; }
		void setY(float y) { m_y = y; }

	private:
		float m_width = 0.1f;
		float m_l2 = 0.1f;
		float m_x = 0.0f;
		float m_y = 0.0f;
	};
}

