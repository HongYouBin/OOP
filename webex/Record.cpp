#include "Record.h"

Record::Record()
{
	reState = false;
}

void Record::showRec()
{
	if (reState == 1)
		cout << "��ȭon. ";
	if (reState == 0)
		cout << "��ȭoff. ";
}

void Record::switchRec()
{
	if (reState == 0) {
		reState = true;
		cout << "��ȭ ����. ";
	}
	else {
		reState = false;
		cout << "��ȭ ����. ";
	}
}

