#pragma once
#include "Figure.h"

class Canvas : public Figure
{
public:
	// Constructor
	Canvas(double width, double height);
	// Destructor
	~Canvas() {};
	// Attributes
private:
	double m_width;
	double m_height;
	// Operations
	// Overrides
public:
	void get();

	void move(double x, double y) override;
	bool dotInside(double x, double y) override;
	bool figureInside(Figure* pFigParent, Figure* pFigChild) override;
};
