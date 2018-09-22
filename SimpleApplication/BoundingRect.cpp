#define _USE_MATH_DEFINES

#include "stdafx.h"
#include "BoundingRect.h"

using namespace SimpleApplication;

BoundingRect::BoundingRect()
{
}

BoundingRect::BoundingRect(float x, float y, float l1, float l2) : m_x(x), m_y(y), m_width(l1), m_l2(l2)
{
}

BoundingRect::~BoundingRect()
{
}

