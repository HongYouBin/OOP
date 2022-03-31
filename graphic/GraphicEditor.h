#pragma once
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

class GraphicEditor
{
private:
	int index;
	int selectedMenu;
	int selectedShape;
	Shape* pStart;
	Shape* pLast;
	void selectMenu();
	void selectFirstShape();
	void insert();
	void deleteShape();
	void showAll();
public:
	GraphicEditor();
	~GraphicEditor();
	void run();
};

