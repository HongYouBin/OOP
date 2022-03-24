#pragma once
#include <iostream>
#include <string>
#include "Mic.h"
#include "Application.h"
#include "Comment.h"
#include "Participant.h"
#include "Video.h"
#include "Record.h"

class Professor
{
private:
	string Id;
public:
	Professor(string id);
	void startWebex();
};

