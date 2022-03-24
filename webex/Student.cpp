#include "Student.h"

Student::Student(string name, string meetNum) {
	this->id = name;
	this->meetNumber = meetNum;
}




void Student::startWebex()
{
	cout << endl << endl << "미팅 시작" << endl << meetNumber << "'s Personal Room" << endl;

	Video v;
	Mic m;
	Comment c(id);
	Application a;
	Participant p(id, meetNumber);
	int state = 1;

	while (state) {
		int num = 0;
		cout << endl << "<< 현재 상태 : ";
		v.showVid(), m.showMic(), a.showApp(), p.showNum(), c.cState();
		cout << ">>" << endl;
		c.showComment();
		cout << endl << endl << "1번 : 비디오 on/off" << endl <<
			"2번 : 마이크 on/off" << endl << "3번 : 컨텐츠 공유 on/off" << endl <<
			"4번 : 참가자 목록 on/off" << endl << "5번 : 댓글 on/off" << endl << "6번 : 댓글 작성" << endl << "7번 : Webex 종료"
			<< endl << endl;
		cin >> num;
		cin.ignore();
		switch (num) {
		case 1:
			v.VideoSwitch();
			cout << endl;
			break;
		case 2:
			m.MicSwitch();
			cout << endl;
			break;
		case 3:
			a.appSwitch();
			cout << endl;
			break;
		case 4:
			p.partSwitch();
			cout << endl;
			break;
		case 5:
			c.commentSwitch();
			cout << endl;
			break;
		case 6:
			c.write();
			cout << endl;
			break;
		case 7:
			cout << endl << endl << endl << "Webex를 종료합니다";
			state = 0;
			break;
		}



	}

}