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
		cout << "����� �¼��� �ƴմϴ�. ";
		return false;
	}
	else {
		cout << "�̸��� �߸� �Է��߽��ϴ�. ";
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
