#include "Professor.h"
#include "Student.h"

int main() {
	string name, meetNum;
	int num;
	cout << "ID를 입력하세요 : ";
	getline(cin, name);
	cout << endl << name << "로그인 완료" << endl <<
		"미팅룸 만들기 >1번, 미팅 참여하기> 2번 ";
	cin >> num;
	if (num == 1) {
		Professor p(name);
		p.startWebex();
	}
	if (num == 2) {
		cin.ignore();
		cout << endl<<"미팅 번호를 입력하시오 : ";
		getline(cin, meetNum);
		Student s(name, meetNum);
		s.startWebex();
	}
	
	return 0;
}