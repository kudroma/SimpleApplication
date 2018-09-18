#pragma once
namespace SimpleApplication
{
	class Vector2d
	{
	public:
		Vector2d();
		Vector2d(float x, float y);
		~Vector2d();
		float x() const { return m_x; }
		float y() const { return m_y; }
		void setX(float x) { m_x = x; }
		void setY(float y) { m_y = y; }
		float dotProduct(const Vector2d& otherVec) const;
		float crossProduct(const Vector2d& otherVec) const;

	private:
		float m_x = 0.0f;
		float m_y = 0.0f;
	};
}