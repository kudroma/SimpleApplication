#include "stdafx.h"
#include "AbstractFigure.h"


AbstractFigure::AbstractFigure()
{
	{
		//std::cout << "object is created!" << std::endl;
	}

	AbstractFigure::AbstractFigure (int id) : m_id(id) // analog: m_id = id;
	{
		//std::cout << "object is created with id: " << m_id << std::endl << std::endl;
	}


	AbstractFigure::AbstractFigure
	{
		//std::cout << "object is destructed!" << std::endl;
	}
}



