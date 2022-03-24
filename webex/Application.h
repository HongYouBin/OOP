#pragma once
#include <iostream>
#include <string>
using namespace std;

class Application
{
private:
	bool appState;
	string app;
public:
	Application();
	void appSwitch();
	void ShareApp();
	void OffApp();
	void showApp();
};

