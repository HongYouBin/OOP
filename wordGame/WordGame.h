#pragma once
#include "Players.h"
using namespace std;

class WordGame
{
private:
	int NumOfPlayers;
	string startWord;
	void createPlayers();
	Players* players;
public:
	WordGame();
	~WordGame();
	void startGame();

};

