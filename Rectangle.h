#pragma once
#include "Figure.h"

class Rectangle : public Figure
{

private: 
	double m_dx, m_ex, m_dy, m_ey;

public: // Constructor
	Rectangle(double Dx, double Dy, double Ex, double Ey, const string& name);

	void get();
	void input();

	void setDx(double v);
	void setDy(double v);
	void setEx(double v);
	void setEy(double v);

	double getDx();
	double getDy();
	double getEx();
	double getEy();

	void move(double x, double y) override;
	bool dotInside(double x, double y) override;
	bool figureInside(Figure* pFigParent, Figure* pFigChild) override;
};
