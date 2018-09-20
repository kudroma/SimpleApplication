#pragma once

namespace SimpleApplication
{
	//! Class represents vector in 2D space.
	class Vector2d
	{
	public:
		Vector2d();
		
		//! Constructor from \c x and \c y coordinates.
		Vector2d(float x, float y);
		
		~Vector2d();
		
		//! Returns \c x coordinate of the vector.
		float x() const { return m_x; }
		
		//! Returns \c y coordinate of the vector.
		float y() const { return m_y; }
		
		//! Sets \c x coordinate of the vector.
		void setX(float x) { m_x = x; }
		
		//! Sets \c y coordinate of the vector.
		void setY(float y) { m_y = y; }
		
		//! Returns dot product \c with other vector.
		float dotProduct(const Vector2d& otherVec) const;
		
		//! Returns cross product \c with other vector.
		float crossProduct(const Vector2d& otherVec) const;

	private:
		//! x coordinate of the vector.
		float m_x = 0.0f;
		
		//! y coordinate of the vector.
		float m_y = 0.0f;
	};
}