#include "Video.h"

Video::Video()
{
	VidState = false;
}

void Video::VideoSwitch()
{
	if (VidState == 0) {
		VidState = true;
		cout << "ºñµð¿À ÄÑÁü. ";
	}
	else {
	VidState = false;
	cout << "ºñµð¿À ²¨Áü. ";
	}
}

void Video::OnVid()
{
	VidState = true;
}

void Video::OffVid()
{
	VidState = false;
}

void Video::showVid()
{
	if (VidState == 1)
		cout << "ºñµð¿À ÄÑÁü. " ;
	if (VidState == 0)
		cout << "ºñµð¿À ²¨Áü. " ;
}
