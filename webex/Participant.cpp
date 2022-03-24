#include "Participant.h"

void Participant::partSwitch()
{
	if (partState == 0) {
		partState = true;
		cout << "현재 인원은 : " << num << "명 " << "참가자 : " << nameOfP;
	}
	else {
		partState = false;
		cout << "참가자 목록 꺼져있습니다. ";
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
		cout << "현재 인원은 : " << num << "명, " << "참가자 : " << nameOfP << ". ";
	if (partState == 0)
		cout << "참가자 목록 꺼져있습니다. ";
}
