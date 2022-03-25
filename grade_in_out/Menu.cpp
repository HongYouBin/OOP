#include "Menu.h"

void Menu::startMenu()
{
	int menu;
	while (true) {
		cout << "성적 입력>> 1번, 통계 확인>> 2번, 종료>> 3번" << ' ';
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
			cout << "종료합니다" << endl;
			break;
		}
		else
			cout << "잘못된 입력입니다" << endl;
	}
}
