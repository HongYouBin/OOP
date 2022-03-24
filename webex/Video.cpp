#include "Video.h"

Video::Video()
{
	VidState = false;
}

void Video::VideoSwitch()
{
	if (VidState == 0) {
		VidState = true;
		cout << "���� ����. ";
	}
	else {
	VidState = false;
	cout << "���� ����. ";
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
		cout << "���� ����. " ;
	if (VidState == 0)
		cout << "���� ����. " ;
}
