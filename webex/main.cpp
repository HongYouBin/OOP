#include "Professor.h"
#include "Student.h"

int main() {
	string name, meetNum;
	int num;
	cout << "ID�� �Է��ϼ��� : ";
	getline(cin, name);
	cout << endl << name << "�α��� �Ϸ�" << endl <<
		"���÷� ����� >1��, ���� �����ϱ�> 2�� ";
	cin >> num;
	if (num == 1) {
		Professor p(name);
		p.startWebex();
	}
	if (num == 2) {
		cin.ignore();
		cout << endl<<"���� ��ȣ�� �Է��Ͻÿ� : ";
		getline(cin, meetNum);
		Student s(name, meetNum);
		s.startWebex();
	}
	
	return 0;
}