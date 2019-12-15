#include "Circle.h"

Circle::Circle(double G1x, double G1y, double R1, const string& name) 
	: Figure(FIGURE_TYPE::CIRCLE, name)
{
	R = R1;
	Gy = G1y;
	Gx = G1x;
}

void Circle::get() //(переопределение)
{
	cout << "КРУГ " << m_name << " центр [" << Gx << ";" << Gy << "] радиус " << R << endl;
}

void Circle::input()
{
	cout << "Введите радиус : ";
	cin >> R;
	cout << "Введите координаты центра : ";
	cin >> Gx >> Gy;
}

void Circle::setGx(double v)
{
	Gx = v;
}

void Circle::setGy(double v)
{
	Gy = v;
}

void Circle::setR(double v)
{
	R = v;
}

double Circle::getGx()
{
	return Gx;
}

double Circle::getGy()
{
	return Gy;
}

double Circle::getR()
{
	return R;
}

void Circle::move(double x, double y)
{
	Gx = Gx + x;
	Gy = Gy + y;
}

double Circle::distance2dot(double Ax, double Ay, double Bx, double By)
{
	double rasst = sqrt((Ax - Bx)*(Ax - Bx) + (Ay - By)*(Ay - By));
	return rasst;
}

bool Circle::dotInside(double x, double y)
{
	double Rasst_ie = distance2dot(Gx, Gy, x, y);

	if (Rasst_ie < R)
		return true;
	else
		return false;
}

bool Circle::figureInside(Figure* pFigParent, Figure* pFigChild)
{
	if (1 == 1)
		return true;
	else
		return false;
}
