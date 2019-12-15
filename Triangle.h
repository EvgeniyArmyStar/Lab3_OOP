#pragma once
#include "Figure.h"

class Triangle : public Figure
{

private: 
	double m_ax, m_bx, m_cx, m_ay, m_by, m_cy;

public: // Constructor
	Triangle(double Ax, double Ay, double Bx, double By, double Cx, double Cy, const string& name);
	void get();
	void input();

	void setAx(double v);
	void setAy(double v);
	void setBx(double v);
	void setBy(double v);
	void setCx(double v);
	void setCy(double v);

	double getAx();
	double getAy();
	double getBx();
	double getBy();
	double getCx();
	double getCy();

	void move(double x, double y);

	// A, B - уравнение прямой для двух точек
	// x,y - точка, которую проверяем
	double lineExpression(double Ax, double Ay, double Bx, double By, double x, double y);

	bool dotInside(double x, double y);
	bool figureInside(Figure* pFigParent, Figure* pFigChild);
};
