#pragma once

namespace SimpleApplication
{

    //! Class represents point in 2D space.
	class Point2d
	{
	public:
		Point2d();

        //! Constructor from \c x and \c y coordinates.
		Point2d(float x, float y);
		
		~Point2d();
		
        //! Returns \c x coordinate of the point.
		float x() const { return m_x; }
		
        //! Retruns \c y coordinate of the point.
		float y() const { return m_y; }
		
        //! Sets \c x coordinate of the point.
		void setX(float x) { m_x = x; }
		
        //! Sets \c y coordinate of the point.
		void setY(float y) { m_y = y; }
		
        //! Returns distance to \c other Point.
		float distanceToPoint(const Point2d& otherPoint) const;
		
	private:
        //! x coordinate of the point.
		float m_x = 0.0f;

        //! y coordinate of the point.
		float m_y = 0.0f;
	};
}