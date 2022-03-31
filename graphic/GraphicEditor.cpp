#include "GraphicEditor.h"

GraphicEditor::GraphicEditor()
{
	cout << "�׷��� �������Դϴ�." << endl << endl;
	index = 0;
	selectedMenu = NULL;
	selectedShape = NULL;
	pStart = NULL;
	pLast = NULL;
}

GraphicEditor::~GraphicEditor()
{
	Shape* start = pStart;
	for(int i=0;i<index-1;i++) {
		Shape* last = start->getNext();
		delete start;
		start = last;
	}
}

void GraphicEditor::run()
{
	while (true) {
		selectMenu();
		if (selectedMenu == 1) {
			if (index == 0) {
				selectFirstShape();
			}
			else {
				insert();
			}
		}
		else if (selectedMenu == 2) {
			deleteShape();
		}
		else if (selectedMenu == 3) {
			showAll();
		}
		else if (selectedMenu == 4) {
			break;
		}
		else {
			cout <<endl<< "1���� 4���� �����Ͻÿ�" << endl;
		}
	}
}

void GraphicEditor::selectMenu()
{
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> selectedMenu;
	cout << endl;
}

void GraphicEditor::selectFirstShape()
{
	cout<< "��:1, ��:2, �簢��:3 >> ";
	cin >> selectedShape;
	cout << endl;
	if (selectedShape == 1) {
		pStart = new Line();
		pLast = pStart;
		index++;
	}
	if (selectedShape == 2) {
		pStart = new Circle();
		pLast = pStart;
		index++;
	}
	else if (selectedShape == 3) {
		pStart = new Rect();
		pLast = pStart;
		index++;
	}
}

void GraphicEditor::insert() 
{
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> selectedShape;
	cout << endl;
	if (selectedShape == 1) {
		pLast = pLast->add(new Line);
		index++;
	}
	if (selectedShape == 2) {
		pLast = pLast->add(new Circle);
		index++;
	}
	else if (selectedShape == 3) {
		pLast = pLast->add(new Rect);
		index++;
	}
}

void GraphicEditor::deleteShape() 
{
	int deleteIndex;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> deleteIndex;
	cout << endl;
	Shape* before = pStart;
	Shape* erasedAddress = pStart;
	Shape* after = pStart;
	
	if (deleteIndex == 0) {
		pStart = pStart->getNext();
		delete erasedAddress;
		index--;
	}
	else if (0<deleteIndex && deleteIndex<index-1) {
		for (int i = 0; i < deleteIndex - 1; i++) {
			before = before->getNext();
		}
		for (int i = 0; i < deleteIndex + 1; i++) {
			after = after->getNext();
		}
		erasedAddress = before->getNext();
		before->setNext(after);
		delete erasedAddress;
		index--;
	}
	else if(deleteIndex==index-1){
		for (int i = 0; i < deleteIndex-1; i++) {
			before = before->getNext();
		}
		for (int i = 0; i < deleteIndex ; i++) {
			erasedAddress = erasedAddress->getNext();
		}
		pLast = before;
		delete erasedAddress;
		index--;
	}
}

void GraphicEditor::showAll() 
{
	Shape* start = pStart;
	for (int i = 0; i < index; i++) {
		cout << i << ": ";
		start->paint();
		start = start->getNext();
		cout << endl;
	}
}
