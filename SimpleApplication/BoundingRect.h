#pragma once

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

		//! Constructs bounding rect from coordinates of center (\c x, \c y), \c width and \c height.
		BoundingRect(float x, float y, float width, float height);

		~BoundingRect();

		//! Returns width of the bounding rect.
		float width() const { return m_width; }

		//! Sets width of the bounding rect.
		void setWidth(float width) { m_width = width; }

		//! Returns height of the bouding rect.
		float height() const { return m_height; }

		//! Sets height of the bouding rect.
		void setHeight(float height) { m_height = height; }

		//!  Returns x coordinate of the center of the bounding rect.
		float x() const { return m_x; }

		//!  Sets x coordinate of the center of the bounding rect.
		void setX(float x) { m_x = x; }

		//!  Returns y coordinate of the center of the bounding rect.
		float y() const { return m_y; }

		//! Sets y coordinate of the center of the bounding rect.
		void setY(float y) { m_y = y; }

	private:
		//! Width of the bounding rect.
		float m_width = 0.1f;

		//! Height of the bounding rect.
		float m_height = 0.1f;

		//! X coordinate of the center of the bounding rect.
		float m_x = 0.0f;

		//! Y coordinate of the center of the bounding rect.
		float m_y = 0.0f;
	};
}

