#include "Menu.h"

void Menu::startMenu()
{
	int menu;
	while (true) {
		cout << "���� �Է�>> 1��, ��� Ȯ��>> 2��, ����>> 3��" << ' ';
		cin >> menu;
		cout << endl;
		if (menu == 1) {
			InsertGrade g;
			g.run();
		}
		else if (menu == 2) {
			Statistics s;
			s.statisticsRun();
		}
		else if (menu == 3) {
			cout << "�����մϴ�" << endl;
			break;
		}
		else
			cout << "�߸��� �Է��Դϴ�" << endl;
	}
}
