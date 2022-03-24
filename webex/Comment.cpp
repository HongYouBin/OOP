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
		cout << "��� ����" << endl;
	}
	else {
		coState = false;
		cout << "��� ���� ";
	}
}

void Comment::onComment()
{
	coState = true;
	cout << "��� ����" << endl;
	cout << comment;
}

void Comment::offComment()
{
	coState = false;
}

void Comment::write()
{
	cout << "����� �ۼ��Ͻÿ� : ";
	string comment1 = "";
	string tmp;
	getline(cin, tmp);
	comment1 = name + tmp;
	comment = comment + '\n' + comment1;
}

void Comment::cState()
{
	if (coState == 1) {
		cout <<"����� �����ֽ��ϴ�. ";
	}
	else
		cout << "����� �����ֽ��ϴ�. ";
}

void Comment::showComment()
{
	if (coState == 1)
		cout << comment;
	
}

