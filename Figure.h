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
	FIGURE_TYPE m_idType; // ��� ������
	string m_name; // ��� ������ (� ���� ����� ������� ���� ������ �����)
	int m_insideLevel; // ������� ����������� ������
	vector<Figure*> m_figures; // ������ ��������� �� ������, ������� ������� � ������ ������
	// Get & Set
public:
	string getName() { return m_name; };
	// Operations
public:
	// �������� ������ �� ��������� pFigChild � ������ � ������ nameParent
	// ��������������, ��� ������ � �������� ������� idSerialParent ��������� ������ �������.
	// ���������� true, ���� ��������
	bool addFigure(const string& nameParent, Figure* pFigChild);

	// ������� �� ����� ���������� � ���� � � ���� ��������� �������
	void printAllInside();
	// ���������� ���� � ��� ��������� ������
	void moveAllInside(double x, double y);
	// ���� ��� - ������� �� ����� ��� ������ � ������ ������
	Figure* findDot(double x, double y);
	//��������� ��� ������
	FIGURE_TYPE getType();

	int getInsideLevel();
private:
	// �������� ��������� �� ������ ������ ������� �� � name
	// ���������� NULL, ���� ����� ������ ���
	Figure* findFigure(const string& name);

	// ������� ���������� � ���� � ������ ������ �����������
	void printMyInfo();

public:
	// Abstract
	virtual void get() = 0;
	virtual void move(double x, double y) = 0;
	virtual bool dotInside(double x, double y) = 0;
	virtual bool figureInside(Figure* pFigParent, Figure* pFigChild) = 0;
};
