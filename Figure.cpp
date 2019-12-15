#include "Figure.h"

Figure::Figure(FIGURE_TYPE idType, const string& name)
{
	m_idType = idType;
	m_name = name;
	m_insideLevel = 0;
}

bool Figure::addFigure(const string& nameParent, Figure* pFigChild)
{
	FIGURE_TYPE tc = pFigChild->m_idType;
	if (tc != FIGURE_TYPE::RECTANGLE && tc != FIGURE_TYPE::CIRCLE && tc != FIGURE_TYPE::TRIANGLE)
	{
		cout << "Невозможно добавить: фигура с таким типом не может быть вложена в другую\n";
		return false;
	}

	Figure* pFigParent = findFigure(nameParent);
	if (pFigParent == nullptr)
	{
		cout << "Невозможно добавить: нет фигуры с таким nameParent\n";
		return false;
	}

	Figure* pOldAdd = findFigure(pFigChild->m_name);
	if (pOldAdd != nullptr)
	{
		cout << "Невозможно добавить: фигура с таким nameChild уже есть внутри фигуры nameParent\n";
		return false;
	}

	bool check_coord = true; // позже - реализовать проверку координат фигур
	if (check_coord == false)
	{
		cout << "Невозможно добавить: координаты фигур не допускают вложение\n";
		return false;
	}

	// если ранее не вышли по return false, значит добавляем
	pFigParent->m_figures.push_back(pFigChild);
	// уровень вложенности ребенка на 1 больше, чем у родителя
	pFigChild->m_insideLevel = pFigParent->m_insideLevel + 1;

	return true;
}

void Figure::moveAllInside(double x, double y)
{
	move(x, y);

	int n = (int) m_figures.size();
	for (int i = 0; i < n; ++i)
		m_figures[i]->moveAllInside(x, y);
}

void Figure::printAllInside()
{
	printMyInfo();

	int n = (int) m_figures.size();
	for (int i = 0; i < n; ++i)
		m_figures[i]->printAllInside();
}

Figure* Figure::findDot(double x, double y)
{
	if (dotInside(x, y) == false)
		return nullptr;

	Figure* res = this;

	int n = (int) m_figures.size();
	for (int i = 0; i < n; ++i)
	{
		Figure* vn = m_figures[i]->findDot(x, y);
		if (vn != nullptr)
		{
			if (vn->m_insideLevel > res->m_insideLevel)
				res = vn;
		}
	}

	return res;
}

FIGURE_TYPE Figure::getType()
{
	return m_idType;
}

Figure* Figure::findFigure(const string& name)
{
	if (m_name == name)
		return this;

	int n = (int) m_figures.size();
	for (int i = 0; i < n; ++i)
		if (m_figures[i]->m_name == name)
			return m_figures[i];

	return nullptr;
}

void Figure::printMyInfo()
{
	for (int i = 0; i < m_insideLevel; ++i)
		cout << "  ";
	get();
}


int Figure::getInsideLevel()
{
	return m_insideLevel;
}
