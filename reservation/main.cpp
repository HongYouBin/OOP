#include "UserInterface.h"

int main() {
	Schedule plans[3];
	UserInterface airlineBook(plans);
	airlineBook.run();

	return 0;
}