#include "InsertGrade.h"


void InsertGrade::run() {
	insertInfo();
	makeFile();
}

void InsertGrade::insertInfo()
{
	for (int j = 0; j < 3; j++) {
		cout << j + 1 << "반의 성적을 입력합니다." << endl;
		for (int i = 0; i < 5; i++) {
			cout << "이름을 입력하시오>> ";
			cin >> name[j][i];
			try {
				cout << name[j][i] << "의 점수를 입력하시오(최대 100점입니다)>> ";
				cin >> score;
				if (100 < score||score<0)
					throw score;
				else
				grade[name[j][i]] = score;
			}
			catch (float x) {
				cout << "최소 0점부터, 최대 100점까지 입력 가능합니다" << endl;
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
		cout << "grade.txt 파일을 열 수 없다";
	}
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 5; i++) {
			fout << j + 1 << "반" << ' ' << name[j][i] << ">>" << endl;
			fout << grade[name[j][i]] << endl;
		}
	}
	fout.close();
}
