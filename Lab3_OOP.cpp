#include "Canvas.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void check()
{
	Canvas Canv(500, 300);

	cout << "\n=== Проверка 1: Вывод информации о пустой канве\n";

	Canv.printAllInside();

	cout << "\n=== Проверка 2: Попытка добавить одну канву внутрь другой\n";

	Canvas Canv_testAdd(150, 50);

	Canv.addFigure(Canv.getName(), &Canv_testAdd);

	//////////////////////////////////////////////////////////////////////////

	cout << "\n=== Проверка 3-A: Создание прямоугольника P1 и вывод инфомации о нем\n";

	Rectangle P1(2, 4, 5, 6, "P1");

	P1.get();

	cout << "\n=== Проверка 3-B: Добавление прямоугольника P1 на канву\n";

	Canv.addFigure(Canv.getName(), &P1);

	Canv.printAllInside();

	cout << "\n=== Проверка 3-C: Попытка добавления на канву уже добавленной фигуры P1\n";

	Canv.addFigure(Canv.getName(), &P1);

	Canv.printAllInside();

	cout << "\n!!! Написать проверку 3-D для координат\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n=== Проверка 4-A: Создание круга K1 и вывод инфомации о нем\n";

	Circle K1(2, 3, 4, "K1");

	K1.get();

	cout << "\n=== Проверка 4-B: Добавление круга K1 на канву\n";

	Canv.addFigure(Canv.getName(), &K1);

	Canv.printAllInside();

	cout << "\n=== Проверка 4-C: Попытка добавления на канву уже добавленной фигуры K1\n";

	Canv.addFigure(Canv.getName(), &K1);

	Canv.printAllInside();

	cout << "\n!!! Написать проверку 4-D для координат\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! Написать проверки 5-A-B-C-D для треугольника. Аналогично проверкам 3 и 4 для прямоугольника и круга\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! Проверка 6A: Добавление трех разных фигур внутрь прямоугольника P1\n";

	Rectangle P10(2, 2, 3, 4, "P10");

	Circle K10(1, 2, 3, "K10");

	// TODO: treug

	Canv.addFigure("P1", &P10);

	Canv.addFigure("P1", &K10);

	Canv.printAllInside();

	cout << "\n!!! Проверка 6B: Добавление трех разных фигур внутрь круга K1\n";

	Rectangle P11(1, 2, 3, 4, "P11");

	Circle K11(1, 2, 3, "K11");

	// TODO: treug

	Canv.addFigure("K1", &P11);

	Canv.addFigure("K1", &K11);

	Canv.printAllInside();

	cout << "\n!!! Проверка 6C: Добавление трех разных фигур внутрь круга K1\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! Проверка 7A: Передвижение K1\n";

	K1.moveAllInside(1, 2);

	Canv.printAllInside();

}

void check8(Figure *pointerF)
{
	double Tx, Ty;
	bool res;
	cout << "\n!!! Проверка 8: точки внутри фигуры:\n";
	pointerF->get();
	cout << "Введите координаты x, y (точки) ";
	cin >> Tx >> Ty;
	res = pointerF->dotInside(Tx, Ty);

	if (res == true)
		cout << "Точка внутри \n";
	else
		cout << "Точка не внутри \n";
}

void check8_Rectangle()
{
	Rectangle P12(4, 3, 12, 6, "P420");
	check8(&P12);
}

void check8_Circle()
{
	Circle K(5, 7, 5, "Kru");
	check8(&K);
}

void check8_Canvas()
{
	Canvas Cao(500, 300);
	check8(&Cao);
}

void check8_Triangle()
{
	Triangle T(4, 3, 9, 10, 10, 2, "Tre");
	check8(&T);
}

int main()
{
	setlocale(LC_ALL, "");
	check();
	return 0;
}