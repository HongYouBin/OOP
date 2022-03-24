#pragma once
#include <iostream>
using namespace std; 

class Participant
{
private:
	string nameOfP;
	string nameOfG;
	int num;
	bool partState;
public:
	void partSwitch();
	void onPart();
	void offPart();
	Participant(string n);
	Participant(string n, string k);
	void showNum();
};

