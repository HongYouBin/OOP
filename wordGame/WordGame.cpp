#include "WordGame.h"
#include <iostream>
using namespace std;

void WordGame::createPlayers()
{
	cout << "게임에 참가하는 인원은 몇명입니까? ";
	cin >> NumOfPlayers;
	players = new Players[NumOfPlayers];
	string playerName;
	for (int i = 0; i < NumOfPlayers; ++i) {
		cout << endl<< "이름을 입력하세요: ";
		cin >> playerName;
		players[i].setName(playerName);
	}
	
}

WordGame::WordGame()
{
	NumOfPlayers = 3;
}

WordGame::~WordGame()
{
	delete[]players;
}

void WordGame::startGame()
{
	cout << endl<<"끝말 잇기 게임을 시작합니다." << endl;
	createPlayers();
	cout << "시작하는 단어는 아버지 입니다" << endl;
	startWord = "아버지";
	int i = 0;
	while (true) {
		string s;
		cin >> s;
		players[i%NumOfPlayers].sayWord(s);
		int size = startWord.size();
		if (startWord.at(size - 2) == s.at(0) && startWord.at(size - 1) == s.at(1)) {
			cout << players[i % NumOfPlayers].getName() << ">>" << s << endl;
			startWord = s;
			i++;
		}
		else {
			cout << players[i % NumOfPlayers].getName() << "끝말잇기 실패" << endl;
			break;
		}

	}
}
