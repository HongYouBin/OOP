#include "Student.h"

Student::Student(string name, string meetNum) {
	this->id = name;
	this->meetNumber = meetNum;
}




void Student::startWebex()
{
	cout << endl << endl << "���� ����" << endl << meetNumber << "'s Personal Room" << endl;

	Video v;
	Mic m;
	Comment c(id);
	Application a;
	Participant p(id, meetNumber);
	int state = 1;

	while (state) {
		int num = 0;
		cout << endl << "<< ���� ���� : ";
		v.showVid(), m.showMic(), a.showApp(), p.showNum(), c.cState();
		cout << ">>" << endl;
		c.showComment();
		cout << endl << endl << "1�� : ���� on/off" << endl <<
			"2�� : ����ũ on/off" << endl << "3�� : ������ ���� on/off" << endl <<
			"4�� : ������ ��� on/off" << endl << "5�� : ��� on/off" << endl << "6�� : ��� �ۼ�" << endl << "7�� : Webex ����"
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
			cout << endl << endl << endl << "Webex�� �����մϴ�";
			state = 0;
			break;
		}



	}

}