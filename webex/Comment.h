#pragma once
#include <iostream>
#include <string>
using namespace std;

class Comment
{
private:
	string name;
	string comment;
	bool coState;
public:
	Comment(string n);
	void commentSwitch();
	void onComment();
	void offComment();
	void write();
	void cState();
	void showComment();
};

