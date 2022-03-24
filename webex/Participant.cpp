#include "Participant.h"

void Participant::partSwitch()
{
	if (partState == 0) {
		partState = true;
		cout << "���� �ο��� : " << num << "�� " << "������ : " << nameOfP;
	}
	else {
		partState = false;
		cout << "������ ��� �����ֽ��ϴ�. ";
	}
}

void Participant::onPart()
{
	partState = true;
}

void Participant::offPart()
{
	partState = false;
}

Participant::Participant(string n)
{
	nameOfP = n;
	num = 1;
	partState = false;
}

Participant::Participant(string n, string k)
{
	nameOfP = k+"(host)" +", " +n;
	num = 2;
	partState = false;
}

void Participant::showNum()
{
	if (partState == 1)
		cout << "���� �ο��� : " << num << "��, " << "������ : " << nameOfP << ". ";
	if (partState == 0)
		cout << "������ ��� �����ֽ��ϴ�. ";
}
