#pragma once

namespace SimpleApplication
{
	class Point2d
	{
	public:
		Point2d();

		Point2d(float x, float y);
		
		~Point2d();
		
		float x() const { return m_x; }
		
		float y() const { return m_y; }
		
		void setX(float x) { m_x = x; }
		
		void setY(float y) { m_y = y; }
		
		float distanceToPoint(const Point2d& otherPoint) const;
		
	private:
		float m_x = 0.0f;

		float m_y = 0.0f;
	};
}