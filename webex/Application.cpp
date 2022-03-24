#include "Application.h"

Application::Application()
{
	appState = false;
	app = "";
}

void Application::appSwitch()
{
	if (appState == 0) {
		appState = true;
		cout << "어떤 컨탠츠를 공유하시겠습니까? : ";
		getline(cin, app);
	}
	else {
		cout << "파일이 공유중이지 않습니다. ";
		appState = false;
	}
}

void Application::ShareApp()
{	
	cout << "어떤 컨탠츠를 공유하시겠습니까? : ";
	getline(cin, app);
	cout << endl;
}

void Application::OffApp()
{
	appState = false;
}

void Application::showApp()
{
	if (appState == 1)
		cout << app<< "이 공유중입니다. ";
	if (appState == 0)
		cout << "파일이 공유중이지 않습니다. ";
}
