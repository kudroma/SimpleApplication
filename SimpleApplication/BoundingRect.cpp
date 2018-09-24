#define _USE_MATH_DEFINES

#include "BoundingRect.h"

using namespace SimpleApplication;

BoundingRect::BoundingRect()
{
}

BoundingRect::BoundingRect(float x, float y, float width, float height) : m_x(x), m_y(y), m_width(width), m_height(height)
{
}

BoundingRect::~BoundingRect()
{
}

