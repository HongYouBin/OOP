#pragma once
class Shape
{
private:
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape();
	virtual ~Shape();
	void paint();
	Shape* add(Shape* p);
	Shape* getNext();
	void setNext(Shape *p);
};

