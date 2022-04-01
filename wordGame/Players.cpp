#include "Players.h"

void Players::setName(string name)
{
	this->name = name;
}

string Players::getName()
{
	return name;
}

void Players::sayWord(string word)
{
	this->word = word;
}
