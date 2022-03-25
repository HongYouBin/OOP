#pragma once
#include "InsertGrade.h"



class Statistics
{
private:
	float score[15];
	int id;
	string name[15];
	vector<string> array;
	vector<float> arrayScore;
	map<float, string> grade;
	void highLowScore();
	void averageInClass();
	void getAverage();
	void ascendingInClass();
	
public:
	Statistics();
	void statisticsRun();
};

