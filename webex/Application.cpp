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
		cout << "� �������� �����Ͻðڽ��ϱ�? : ";
		getline(cin, app);
	}
	else {
		cout << "������ ���������� �ʽ��ϴ�. ";
		appState = false;
	}
}

void Application::ShareApp()
{	
	cout << "� �������� �����Ͻðڽ��ϱ�? : ";
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
		cout << app<< "�� �������Դϴ�. ";
	if (appState == 0)
		cout << "������ ���������� �ʽ��ϴ�. ";
}
