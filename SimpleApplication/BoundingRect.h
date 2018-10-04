#pragma once

#include "Point2d.h"
#include <iostream>

namespace SimpleApplication
{
	//! Class represents rect bounding some figure.
	/*!
	    Bounding rect has the following parameters:
		\li x coordinate of the center;
		\li y coordinate of the center;
		\li width of the bounding rect;
		\li height of the bounding rect.
	*/
	class BoundingRect
	{
	public:
		BoundingRect();

		//! Constructs bounding rect from coordinates of center (m_center), \c width and \c height.
		BoundingRect(float m_center, float width, float height);

		~BoundingRect();

		//! Returns width of the bounding rect.
		float width() const { return m_width; }

		//! Sets width of the bounding rect.
		void setWidth(float width) { m_width = width; }

		//! Returns height of the bouding rect.
		float height() const { return m_height; }

		//! Sets height of the bouding rect.
		void setHeight(float height) { m_height = height; }

		//!  Returns center  of the bounding rect.
		Point2d center() const { return m_center; }

		//! Sets center  of the bouding rect.
		void setCenter(Point2d center) { m_center = center; }

	private:
		//! Width of the bounding rect.
		float m_width = 0.1f;

		//! Height of the bounding rect.
		float m_height = 0.1f;

		//! Center of the bounding rect.
		Point2d m_center;
	};
}

