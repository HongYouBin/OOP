#include "Record.h"

Record::Record()
{
	reState = false;
}

void Record::showRec()
{
	if (reState == 1)
		cout << "³ìÈ­on. ";
	if (reState == 0)
		cout << "³ìÈ­off. ";
}

void Record::switchRec()
{
	if (reState == 0) {
		reState = true;
		cout << "³ìÈ­ ½ÃÀÛ. ";
	}
	else {
		reState = false;
		cout << "³ìÈ­ Á¾·á. ";
	}
}

