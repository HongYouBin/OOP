#include "Schedule.h"

Schedule::Schedule()
{
	for (int i=0; i < 8; i++) {
		seat[i] = "---";
	}
}

bool Schedule::setSeat(int seatNum) {
	if (seat[seatNum - 1] == "---") {
		return true;
	}
	else
		return false;
}

bool Schedule::cancelSeat(int seatNum, string name) {
	if (seat[seatNum - 1] ==name) {
		seat[seatNum - 1] = "---";
		return true;
	}
	else if (seat[seatNum - 1] == "---") {
		cout << "예약된 좌석이 아닙니다. ";
		return false;
	}
	else {
		cout << "이름을 잘못 입력했습니다. ";
		return false;
	}
}

void Schedule::showSeat(){
	for (int i = 0; i < 8; i++) {
		cout << "    " << seat[i] << "    ";
	}
	cout << endl;
}

void Schedule::insertName(int seatNum, string name)
{
	seat[seatNum - 1] = name;
}
