#define _USE_MATH_DEFINES

#include "BoundingRect.h"

using namespace SimpleApplication;

BoundingRect::BoundingRect()
{
}

BoundingRect::BoundingRect(float m_center, float width, float height) :  m_width(width), m_height(height)
{
}

BoundingRect::~BoundingRect()
{
}

