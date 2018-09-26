#include "RaoundedRectangle.h"

#define _USE_MATH_DEFINES
#include <math.h>



RaoundedRectangle::RaoundedRectangle()
{
}

RaoundedRectangle::RaoundedRectangle(int id, float w, float h, float r) : AbstractFigure(id), m_w(w), m_h(h), m_r(r)
{
}

RaoundedRectangle::~RaoundedRectangle()
{
}

float RaoundedRectangle::perimeter()
{
	return 2 * (m_w + m_h);
}

float RaoundedRectangle::area()
{
	return m_w * m_h;
}

float RaoundedRectangle::areaBigRectangle()
{
	return m_w * m_h;
}
