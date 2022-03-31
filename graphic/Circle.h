#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle:public Shape
{
protected:
	virtual void draw();
};

