#include "Mic.h"

Mic::Mic()
{
	MState = false;
}

void Mic::MicSwitch()
{
	if (MState == 1) {
		MState = false;
		cout << "����ũ ����. ";
	}
	else {
		MState = true;
		cout << "����ũ ����. ";
	}
}

void Mic::OnMic()
{
	MState = true;
}

void Mic::OffMic()
{
	MState = false;
}

void Mic::showMic()
{
	if (MState == 1)
		cout << "����ũ ����. ";
	if (MState == 0)
		cout << "����ũ ����. ";
}
