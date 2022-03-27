#include "UserInterface.h"


UserInterface::UserInterface(Schedule* plans) {
	this->p = plans;
	name = " ";
}

void UserInterface::run() {
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ�. *****" << endl;

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
				cout << "����� �¼��Դϴ�. �ٽ� �����Ͻʽÿ�" << endl;
		}
		else if (selectedMenu == 2)
		{
			selectSchedule();
			selectSeat();
			setName();
			if (p[scheduleNum - 1].cancelSeat(selectedSeat, name) == true) {
				cout << "��Ұ� �Ϸ�Ǿ����ϴ�." << endl;
			}
			
			else{
				cout << "������ �¼��� ��Ȯ�� �̸��� �Է����ֽʽÿ�."<< endl;
			}
		} 
		else if (selectedMenu == 3)
		{
			showAllSeat();
		}
		else if (selectedMenu == 4)
		{
			cout << "���� �ý����� �����մϴ�.";
			break;
		}
		else
		{
			cout << "1������ 4���� ���� �����մϴ�" << endl;
		}
	}
}

void UserInterface::selectMenu(){
	cout << endl<<  "����:1, ���:2, ����:3, ������:4 >> ";
	cin >> selectedMenu;
}

void UserInterface::selectSchedule(){
	cout <<  "07��:1, 12��:2, 17��:3 >> ";
	cin >> scheduleNum;
	if (scheduleNum == 1)
	{
		cout << "07��: ";
		p[0].showSeat();
	}
	else if (scheduleNum == 2)
	{
		cout << "12��: ";
		p[1].showSeat();
	}
	else if (scheduleNum == 3) {
		cout << "17��: ";
		p[2].showSeat();
	}
}

void UserInterface::selectSeat() {
	cout <<  "�¼���ȣ>> ";
	cin >> selectedSeat;
}

void UserInterface::setName(){
	cout <<  "�̸� �Է�>> ";
	cin.ignore();
	getline(cin, name);
	cout << endl;
}

void UserInterface::showAllSeat()
{
	cout << "07�� : ";
	p[0].showSeat();
	cout << "12�� : ";
	p[1].showSeat();
	cout << "17�� : ";
	p[2].showSeat();
}




