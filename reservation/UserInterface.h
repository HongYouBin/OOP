#pragma once
#include "Schedule.h"

class UserInterface
{
private:
	Schedule* p;
	int selectedMenu;
	int scheduleNum;
	int selectedSeat;
	string name;
	void selectMenu();
	void selectSchedule();
	void selectSeat();
	void setName();
	void showAllSeat();
public:
	UserInterface(Schedule* p);
	void run();
	
};

