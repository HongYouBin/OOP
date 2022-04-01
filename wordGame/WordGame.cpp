#include "WordGame.h"
#include <iostream>
using namespace std;

void WordGame::createPlayers()
{
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? ";
	cin >> NumOfPlayers;
	players = new Players[NumOfPlayers];
	string playerName;
	for (int i = 0; i < NumOfPlayers; ++i) {
		cout << endl<< "�̸��� �Է��ϼ���: ";
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
	cout << endl<<"���� �ձ� ������ �����մϴ�." << endl;
	createPlayers();
	cout << "�����ϴ� �ܾ�� �ƹ��� �Դϴ�" << endl;
	startWord = "�ƹ���";
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
			cout << players[i % NumOfPlayers].getName() << "�����ձ� ����" << endl;
			break;
		}

	}
}
