#include "Triangle.h"

Triangle::Triangle(double Ax, double Ay, double Bx, double By, double Cx, double Cy, const string& name)
	: Figure(FIGURE_TYPE::TRIANGLE, name)
{
	m_ax = Ax;
	m_ay = Ay;
	m_bx = Bx;
	m_by = By;
	m_cx = Cx;
	m_cy = Cy;
}

void Triangle::get()
{
	cout << "“–≈”√ќЋ№Ќ»  " << m_name <<
		" c координатами  [" << m_ax << ";" << m_ay << "] [" << m_bx << ";" << m_by << "] [" << m_cx << ";" << m_cy << "] " << endl;
}

void Triangle::input()
{
	cout << "¬ведите координаты 1 - ";
	cin >> m_ax >> m_ay >> m_bx >> m_by >> m_cx >> m_cy;
}

void Triangle::setAx(double v)
{
	m_ax = v;
}

void Triangle::setAy(double v)
{
	m_ay = v;
}

void Triangle::setBx(double v)
{
	m_bx = v;
}

void Triangle::setBy(double v)
{
	m_by = v;
}

void Triangle::setCx(double v)
{
	m_cx = v;
}

void Triangle::setCy(double v)
{
	m_cy = v;
}

double Triangle::getAx()
{
	return m_ax;
}

double Triangle::getAy()
{
	return m_ay;
}

double Triangle::getBx()
{
	return m_bx;
}

double Triangle::getBy()
{
	return m_by;
}

double Triangle::getCx()
{
	return m_cx;
}

double Triangle::getCy()
{
	return m_cy;
}

void Triangle::move(double x, double y)
{
	m_ax = m_ax + x;
	m_ay = m_ay + y;
	m_bx = m_bx + x;
	m_by = m_by + y;
	m_cx = m_cx + x;
	m_cy = m_cy + y;
}

double Triangle::lineExpression(double Ax, double Ay, double Bx, double By, double x, double y)
{
	return (x - Ax) * (By - Ay) - (y - Ay) * (Bx - Ax);
}

bool Triangle::dotInside(double x, double y)
{
	double resAB = lineExpression(m_ax, m_ay, m_bx, m_by, x, y);
	double resBC = lineExpression(m_bx, m_by, m_cx, m_cy, x, y);
	double resCA = lineExpression(m_cx, m_cy, m_ax, m_ay, x, y);
	if ((resAB > 0 && resBC > 0 && resCA > 0) ||
		(resAB < 0 && resBC < 0 && resCA < 0))
		return true;
	else
		return false;
}
bool Triangle::figureInside(Figure* pFigParent, Figure* pFigChild)
{
	if (1)
		return true;
	else
		return false;
}
