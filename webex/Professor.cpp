#include "Professor.h"

Professor::Professor(string id)
{
	this->Id = id;
}

void Professor::startWebex()
{	
	cout << endl << endl << "���� ����" << endl << Id << "'s Personal Room"<<endl;
	
	Video v;
	Mic m;
	Record r;
	Comment c(Id);
	Application a;
	Participant p(Id);
	int state = 1;

	while (state) {
		int num = 0;
		cout << endl << "<< ���� ���� : ";
		v.showVid(), m.showMic(), a.showApp(), p.showNum(), c.cState(), r.showRec();
		cout << ">>" << endl;
		c.showComment();
		cout << endl << endl << "1�� : ���� on/off"<<endl<<
			"2�� : ����ũ on/off"<<endl<<"3�� : ������ ���� on/off"<<endl<<
			"4�� : ������ ��� on/off"<<endl<<"5�� : ��� on/off"<<endl<<"6�� : ��� �ۼ�"<<endl<<"7�� : ��ȭon/off"<<endl<<"8�� : Webex ����" 
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
			r.switchRec();
			cout << endl;
			break;
		case 8:
			cout << endl << endl << endl << "Webex�� �����մϴ�";
			state = 0;
			break;
		}



	}

}
