#pragma once
#include <iostream>
using namespace std;

class Video
{
private:
	bool VidState;
public:
	Video();
	void VideoSwitch();
	void OnVid();
	void OffVid();
	void showVid();
};

