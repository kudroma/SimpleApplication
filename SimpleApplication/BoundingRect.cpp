#define _USE_MATH_DEFINES

#include "BoundingRect.h"

using namespace SimpleApplication;

BoundingRect::BoundingRect()
{
}

BoundingRect::BoundingRect(const Point2d& center, float width, float height) :  m_width(width), m_height(height), m_center(center)
{
}

BoundingRect::~BoundingRect()
{
} 