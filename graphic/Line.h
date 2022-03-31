#pragma once
#include "Circle.h"
#include <iostream>
using namespace std;

class Line : public Shape
{
protected:
	virtual void draw();
};

