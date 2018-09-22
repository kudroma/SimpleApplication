#pragma once

#include <iostream>

namespace SimpleApplication
{
	class BoundingRect
	{
	public:
		BoundingRect();

		BoundingRect(float x, float y, float width, float height);

		~BoundingRect();

		float width() const { return m_width; }
		void setWidth(float width) { m_width = width; }

		float height() const { return m_height; }
		void setHeight(float height) { m_height = height; }

		float x() const { return m_x; }
		void setX(float x) { m_x = x; }

		float y() const { return m_y; }
		void setY(float y) { m_y = y; }

	private:
		float m_width = 0.1f;
		float m_height = 0.1f;
		float m_x = 0.0f;
		float m_y = 0.0f;
	};
}

