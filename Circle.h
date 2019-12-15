#pragma once
#include "Figure.h"

class Circle : public Figure
{
private: 
	double R, Gy, Gx;

public:
	Circle(double G1x, double G1y, double R1, const string& name);
	void get() override; //(переопределение)
	void input();

	void setGx(double v);
	void setGy(double v);
	void setR(double v);

	double getGx();
	double getGy();
	double getR();

	void move(double x, double y) override;
	double distance2dot(double Ax, double Ay, double Bx, double By);
	bool dotInside(double x, double y) override;
	bool figureInside(Figure* pFigParent, Figure* pFigChild) override;
};
