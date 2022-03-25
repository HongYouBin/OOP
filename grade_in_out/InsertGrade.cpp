#include "InsertGrade.h"


void InsertGrade::run() {
	insertInfo();
	makeFile();
}

void InsertGrade::insertInfo()
{
	for (int j = 0; j < 3; j++) {
		cout << j + 1 << "���� ������ �Է��մϴ�." << endl;
		for (int i = 0; i < 5; i++) {
			cout << "�̸��� �Է��Ͻÿ�>> ";
			cin >> name[j][i];
			try {
				cout << name[j][i] << "�� ������ �Է��Ͻÿ�(�ִ� 100���Դϴ�)>> ";
				cin >> score;
				if (100 < score||score<0)
					throw score;
				else
				grade[name[j][i]] = score;
			}
			catch (float x) {
				cout << "�ּ� 0������, �ִ� 100������ �Է� �����մϴ�" << endl;
				i--;
				continue;
			}
		}
	}
}

void InsertGrade::makeFile()
{
	ofstream fout("grade.txt");
	if (!fout) {
		cout << "grade.txt ������ �� �� ����";
	}
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 5; i++) {
			fout << j + 1 << "��" << ' ' << name[j][i] << ">>" << endl;
			fout << grade[name[j][i]] << endl;
		}
	}
	fout.close();
}
