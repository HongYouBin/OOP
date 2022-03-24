#include "Mic.h"

Mic::Mic()
{
	MState = false;
}

void Mic::MicSwitch()
{
	if (MState == 1) {
		MState = false;
		cout << "¸¶ÀÌÅ© ²¨Áü. ";
	}
	else {
		MState = true;
		cout << "¸¶ÀÌÅ© ²¸Áü. ";
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
		cout << "¸¶ÀÌÅ© ÄÑÁü. ";
	if (MState == 0)
		cout << "¸¶ÀÌÅ© ²¨Áü. ";
}
