#include "Canvas.h"

Canvas::Canvas(double width, double height) : Figure(FIGURE_TYPE::CANVAS, "_Canvas_")
{
	m_width = width;
	m_height = height;
}

void Canvas::get()
{
	//	printf("[%s] ... TODO Canvas::get() ... \n",
	//		m_name.c_str());
}

void Canvas::move(double x, double y)
{
	// Canvas не перемещается, функция только для совместимости
}

bool Canvas::dotInside(double x, double y)
{
	if ((x < m_width) && (y < m_height) && (x > 0) && (y > 0))
		return true;
	else
		return false;
}

bool Canvas::figureInside(Figure* pFigParent, Figure* pFigChild)
{
	if ((pFigParent->getType() == FIGURE_TYPE::CANVAS)
		&& (pFigChild->getType() == FIGURE_TYPE::CIRCLE))
	{
		// Проверяем круг внутри канвы
	}

	return false;
}
