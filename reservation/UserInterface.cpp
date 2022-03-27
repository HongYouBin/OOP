#include "UserInterface.h"


UserInterface::UserInterface(Schedule* plans) {
	this->p = plans;
	name = " ";
}

void UserInterface::run() {
	cout << "***** 한성항공에 오신것을 환영합니다. *****" << endl;

	while (true) 
	{
		selectMenu();
		if (selectedMenu == 1)
		{
			selectSchedule();
			selectSeat();
			if (p[scheduleNum - 1].setSeat(selectedSeat) == true)
			{
				setName();
				p[scheduleNum - 1].insertName(selectedSeat, name);
			}
			else if (p[scheduleNum - 1].setSeat(selectedSeat) == false)
				cout << "예약된 좌석입니다. 다시 선택하십시오" << endl;
		}
		else if (selectedMenu == 2)
		{
			selectSchedule();
			selectSeat();
			setName();
			if (p[scheduleNum - 1].cancelSeat(selectedSeat, name) == true) {
				cout << "취소가 완료되었습니다." << endl;
			}
			
			else{
				cout << "예약한 좌석에 정확한 이름을 입력해주십시오."<< endl;
			}
		} 
		else if (selectedMenu == 3)
		{
			showAllSeat();
		}
		else if (selectedMenu == 4)
		{
			cout << "예약 시스템을 종료합니다.";
			break;
		}
		else
		{
			cout << "1번부터 4번만 선택 가능합니다" << endl;
		}
	}
}

void UserInterface::selectMenu(){
	cout << endl<<  "예약:1, 취소:2, 보기:3, 끝내기:4 >> ";
	cin >> selectedMenu;
}

void UserInterface::selectSchedule(){
	cout <<  "07시:1, 12시:2, 17시:3 >> ";
	cin >> scheduleNum;
	if (scheduleNum == 1)
	{
		cout << "07시: ";
		p[0].showSeat();
	}
	else if (scheduleNum == 2)
	{
		cout << "12시: ";
		p[1].showSeat();
	}
	else if (scheduleNum == 3) {
		cout << "17시: ";
		p[2].showSeat();
	}
}

void UserInterface::selectSeat() {
	cout <<  "좌석번호>> ";
	cin >> selectedSeat;
}

void UserInterface::setName(){
	cout <<  "이름 입력>> ";
	cin.ignore();
	getline(cin, name);
	cout << endl;
}

void UserInterface::showAllSeat()
{
	cout << "07시 : ";
	p[0].showSeat();
	cout << "12시 : ";
	p[1].showSeat();
	cout << "17시 : ";
	p[2].showSeat();
}




