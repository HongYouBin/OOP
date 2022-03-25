#pragma once
#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class InsertGrade
{
private:
	int id;
	float score;
	string name[3][5];
	map <string, float> grade;
	void insertInfo();
	void makeFile();
public:
	void run();
};

