#include "Comment.h"

Comment::Comment(string n)
{
	name = n + ":";
	coState = false;
	comment = "";
}


void Comment::commentSwitch()
{
	if (coState == 0) {
		coState = true;
		cout << "´ñ±Û ÄÑÁü" << endl;
	}
	else {
		coState = false;
		cout << "´ñ±Û ²¨Áü ";
	}
}

void Comment::onComment()
{
	coState = true;
	cout << "´ñ±Û ÄÑÁü" << endl;
	cout << comment;
}

void Comment::offComment()
{
	coState = false;
}

void Comment::write()
{
	cout << "´ñ±ÛÀ» ÀÛ¼ºÇÏ½Ã¿À : ";
	string comment1 = "";
	string tmp;
	getline(cin, tmp);
	comment1 = name + tmp;
	comment = comment + '\n' + comment1;
}

void Comment::cState()
{
	if (coState == 1) {
		cout <<"´ñ±ÛÀÌ ÄÑÁ®ÀÖ½À´Ï´Ù. ";
	}
	else
		cout << "´ñ±ÛÀÌ ²¨Á®ÀÖ½À´Ï´Ù. ";
}

void Comment::showComment()
{
	if (coState == 1)
		cout << comment;
	
}

