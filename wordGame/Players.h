#pragma once
#include <string>
using namespace std;

class Players
{
private:
	string name;
	string word;
public:
	void setName(string name);
	string getName();
	void sayWord(string word);
};

