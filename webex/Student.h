#pragma once
#include <iostream>
#include <string>
#include "Mic.h"
#include "Application.h"
#include "Comment.h"
#include "Participant.h"
#include "Video.h"

class Student
{
private:
	string id;
	string meetNumber;
public:
	Student(string id, string num);
	void startWebex();
};




