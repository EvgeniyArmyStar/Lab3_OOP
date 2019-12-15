#include "Canvas.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

void check()
{
	Canvas Canv(500, 300);

	cout << "\n=== �������� 1: ����� ���������� � ������ �����\n";

	Canv.printAllInside();

	cout << "\n=== �������� 2: ������� �������� ���� ����� ������ ������\n";

	Canvas Canv_testAdd(150, 50);

	Canv.addFigure(Canv.getName(), &Canv_testAdd);

	//////////////////////////////////////////////////////////////////////////

	cout << "\n=== �������� 3-A: �������� �������������� P1 � ����� ��������� � ���\n";

	Rectangle P1(2, 4, 5, 6, "P1");

	P1.get();

	cout << "\n=== �������� 3-B: ���������� �������������� P1 �� �����\n";

	Canv.addFigure(Canv.getName(), &P1);

	Canv.printAllInside();

	cout << "\n=== �������� 3-C: ������� ���������� �� ����� ��� ����������� ������ P1\n";

	Canv.addFigure(Canv.getName(), &P1);

	Canv.printAllInside();

	cout << "\n!!! �������� �������� 3-D ��� ���������\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n=== �������� 4-A: �������� ����� K1 � ����� ��������� � ���\n";

	Circle K1(2, 3, 4, "K1");

	K1.get();

	cout << "\n=== �������� 4-B: ���������� ����� K1 �� �����\n";

	Canv.addFigure(Canv.getName(), &K1);

	Canv.printAllInside();

	cout << "\n=== �������� 4-C: ������� ���������� �� ����� ��� ����������� ������ K1\n";

	Canv.addFigure(Canv.getName(), &K1);

	Canv.printAllInside();

	cout << "\n!!! �������� �������� 4-D ��� ���������\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! �������� �������� 5-A-B-C-D ��� ������������. ���������� ��������� 3 � 4 ��� �������������� � �����\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! �������� 6A: ���������� ���� ������ ����� ������ �������������� P1\n";

	Rectangle P10(2, 2, 3, 4, "P10");

	Circle K10(1, 2, 3, "K10");

	// TODO: treug

	Canv.addFigure("P1", &P10);

	Canv.addFigure("P1", &K10);

	Canv.printAllInside();

	cout << "\n!!! �������� 6B: ���������� ���� ������ ����� ������ ����� K1\n";

	Rectangle P11(1, 2, 3, 4, "P11");

	Circle K11(1, 2, 3, "K11");

	// TODO: treug

	Canv.addFigure("K1", &P11);

	Canv.addFigure("K1", &K11);

	Canv.printAllInside();

	cout << "\n!!! �������� 6C: ���������� ���� ������ ����� ������ ����� K1\n";

	//////////////////////////////////////////////////////////////////////////

	cout << "\n!!! �������� 7A: ������������ K1\n";

	K1.moveAllInside(1, 2);

	Canv.printAllInside();

}

void check8(Figure *pointerF)
{
	double Tx, Ty;
	bool res;
	cout << "\n!!! �������� 8: ����� ������ ������:\n";
	pointerF->get();
	cout << "������� ���������� x, y (�����) ";
	cin >> Tx >> Ty;
	res = pointerF->dotInside(Tx, Ty);

	if (res == true)
		cout << "����� ������ \n";
	else
		cout << "����� �� ������ \n";
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