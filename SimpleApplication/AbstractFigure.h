#pragma once
class AbstractFigure
{
public:
	AbstractFigure();
	~AbstractFigure();

	virtual void print() const { std::cout << "object" << std::endl; }

	int id() const { return m_id; }

	void setId(int id) { m_id = id; }

	virtual float perimeter() = 0; // объявление нулевых методов, чтобы определить класс, как абстрактный

	virtual float area() = 0; // объявление нулевых методов, чтобы определить класс, как абстрактный

private:
	int m_id = 0;
};



