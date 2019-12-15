#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

enum class FIGURE_TYPE : int {CANVAS = 0, RECTANGLE, CIRCLE, TRIANGLE};

class Figure
{
public:
	// Constructor
	Figure(FIGURE_TYPE idType, const string& name);
	// Attributes
protected:
	FIGURE_TYPE m_idType; // тип фигуры
	string m_name; // им€ фигуры (у всех фигур должены быть разные имена)
	int m_insideLevel; // уровень вложенности фигуры
	vector<Figure*> m_figures; // храним указатели на фигуры, которые вложены в данную фигуру
	// Get & Set
public:
	string getName() { return m_name; };
	// Operations
public:
	// ƒобавить фигуру по указателю pFigChild в фигуру с именем nameParent
	// ѕредполагаетс€, что фигура с серийным номером idSerialParent находитс€ внутри текущей.
	// ¬озвращаем true, если добавили
	bool addFigure(const string& nameParent, Figure* pFigChild);

	// выводит на экран информацию о себе и о всех вложенных фигурах
	void printAllInside();
	// перемещает себ€ и все вложенные фигуры
	void moveAllInside(double x, double y);
	// ѕќка что - выводит на экран все фигуры с точкой внутри
	Figure* findDot(double x, double y);
	//возращает тип фигуры
	FIGURE_TYPE getType();

	int getInsideLevel();
private:
	// ѕолучить указатель на фигуру внутри текущей по еЄ name
	// ¬озвращаем NULL, если такой фигуры нет
	Figure* findFigure(const string& name);

	// выводит информацию о себе с учетом уровн€ вложенности
	void printMyInfo();

public:
	// Abstract
	virtual void get() = 0;
	virtual void move(double x, double y) = 0;
	virtual bool dotInside(double x, double y) = 0;
	virtual bool figureInside(Figure* pFigParent, Figure* pFigChild) = 0;
};
