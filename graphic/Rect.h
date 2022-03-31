#pragma once
#include "Circle.h"
#include <iostream>
using namespace std;

class Rect : public Shape
{
protected:
	virtual void draw();
};

