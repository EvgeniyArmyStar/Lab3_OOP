#include "Rectangle.h"
#include <algorithm> 

Rectangle::Rectangle(double Dx, double Dy, double Ex, double Ey, const string& name) 
	: Figure(FIGURE_TYPE::RECTANGLE, name)
{
	m_dx = min(Dx, Ex);
	m_dy = min(Dy, Ey);
	m_ex = max(Dx, Ex);
	m_ey = max(Dy, Ey);
}

void Rectangle::get()
{
	cout << "ѕ–яћќ”√ќЋ№Ќ»  " << m_name << " c координатами  [" << m_dx << ";" << m_dy << "] [" << m_ex << ";" << m_ey << "] " << endl;
}

void Rectangle::input()
{
	cout << "¬ведите кооридинаты x : ";
	cin >> m_dx >> m_ex;
	cout << "¬ведите координаты y : ";
	cin >> m_dy >> m_ey;
}

void Rectangle::setDx(double v)
{
	m_dx = v;
}

void Rectangle::setDy(double v)
{
	m_dy = v;
}

void Rectangle::setEx(double v)
{
	m_ex = v;
}

void Rectangle::setEy(double v)
{
	m_ey = v;
}

double Rectangle::getDx()
{
	return m_dx;
}

double Rectangle::getDy()
{
	return m_dy;
}

double Rectangle::getEx()
{
	return m_ex;
}

double Rectangle::getEy()
{
	return m_ey;
}

void Rectangle::move(double x, double y)
{
	m_dx = m_dx + x;
	m_dy = m_dy + y;
	m_ex = m_ex + x;
	m_ey = m_ey + y;
}

bool Rectangle::dotInside(double x, double y)
{
	if ((x > m_dx) && (x < m_ex) && (y > m_dy) && (y < m_ey))
		return true;
	else
		return false;
}

bool Rectangle::figureInside(Figure* pFigParent, Figure* pFigChild)
{
	if (1 == 1)
		return true;
	else
		return false;
}
