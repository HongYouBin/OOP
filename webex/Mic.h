#pragma once
#include <iostream>
using namespace std;

class Mic
{
private:
	bool MState;
public:
	Mic();
	void MicSwitch();
	void OnMic();
	void OffMic();
	void showMic();
};

