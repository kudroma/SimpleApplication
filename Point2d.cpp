#include "stdafx.h"
#include "Point2d.h"
#include <math.h>

SimpleApplication::Point2d::Point2d()
{
}

SimpleApplication::Point2d::Point2d(float x, float y) : m_x(x), m_y(y)
{
}

SimpleApplication::Point2d::~Point2d()
{
}

float SimpleApplication::Point2d::distanceToPoint(float apx, float apy)
{
	return sqrt( (apx-m_x) * (apx-m_x) + (apy-m_y) * (apy-m_y) );
}
