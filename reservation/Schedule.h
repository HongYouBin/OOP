#pragma once
#include <iostream>
#include <string>
using namespace std;

class Schedule
{
private:
	string seat[8];
public:
	Schedule();
	bool setSeat(int seatNum);
	bool cancelSeat(int seatNum, string name);
	void showSeat();
	void insertName(int seatNum, string name);
};

