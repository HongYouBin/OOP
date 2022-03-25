#include "Statistics.h"

void Statistics::statisticsRun()
{
	ascendingInClass();
	cout << endl;
	getAverage();
	cout << endl;
	averageInClass();
	cout << endl;
	highLowScore();
	cout << endl;
}


void Statistics::averageInClass()
{
	float sum = 0;
	float average[3];
	float standard[3];
	for (int i = 0; i < 5; i++) {
		score[i] = stof(array[2 * i + 1]);
		sum += score[i];
	}
	average[0] = sum / 5;
	sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += (score[i] - average[0]) * (score[i] - average[0]);
	}
	standard[0] = sqrt((float)sum);

	sum = 0;
	for (int i = 5; i < 10; i++) {
		score[i] = stof(array[2 * i + 1]);
		sum += score[i];
	}
	average[1] = sum / 5;
	sum = 0;
	for (int i = 5; i < 10; i++) {
		sum += (score[i] - average[1]) * (score[i] - average[1]);
	}
	standard[1] = sqrt((float)sum);

	sum = 0;
	for (int i = 10; i < 15; i++) {
		score[i] = stof(array[2 * i + 1]);
		sum += score[i];
	}
	average[2] = sum / 5;
	sum = 0;
	for (int i = 10; i < 15; i++) {
		sum += (score[i] - average[2]) * (score[i] - average[2]);
	}
	standard[2] = sqrt((float)sum);

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "�� ���>> " << average[i] << ", " << i + 1 << "�� ǥ������>> " << standard[i] << endl;
	}
	vector<float> averageArray;
	map<float, int> averageMap;
	for (id = 0; id < 3; id++) {
		averageMap[average[id]] = id + 1;
		averageArray.push_back(average[id]);
	}
	sort(averageArray.begin(), averageArray.end());
	cout << "�ְ� ��� ��>> " << averageMap[averageArray[2]] << ", " << "���� ��� ��>> " << averageMap[averageArray[0]] << endl;

	vector<float> standardArray;
	map<float, int> standardMap;
	for (id = 0; id < 3; id++) {
		standardMap[standard[id]] = id + 1;
		standardArray.push_back(standard[id]);
	}
	sort(standardArray.begin(), standardArray.end());
	cout << "�ְ� ǥ������ ��>> " << standardMap[standardArray[2]] << ", " << "���� ǥ������ ��>> " << standardMap[standardArray[0]] << endl;
}

void Statistics::getAverage()
{
	float sum = 0;
	float average;
	float standard;
	for (int i = 0; i < 15; i++) {
		score[i] = stof(array[2 * i + 1]);
		sum += score[i];
	}
	average = sum / 15;
	sum = 0;
	for (int i = 0; i < 15; i++) {
		sum += (score[i] - average) * (score[i] - average);
	}
	standard = sqrt((float)sum);
	cout << "��ü ���>> " << average << ", ��ü ǥ������>> " << standard;
}

Statistics::Statistics()
{
	string line;
	ifstream fin("grade.txt");
	if (!fin) {
		cout << "grade.txt. ������ �� �� �����ϴ�." << endl;
	}
	while (getline(fin, line)) {
		array.push_back(line);
	}
}

void Statistics::highLowScore()
{
	vector<float> rankingArray;
	map<float, string> rankingMap;
	for (int i = 0; i < 5; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		rankingMap[score[i]] = name[i];
		rankingArray.push_back(score[i]);
	}
	sort(rankingArray.begin(), rankingArray.end());
	cout << "1�� �ְ� ���� �л�>> " << rankingMap[rankingArray[4]] << ", " << "���� ���� �л�>> " << rankingMap[rankingArray[0]] << endl;

	for (int i = 5; i < 10; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		rankingMap[score[i]] = name[i];
		rankingArray.push_back(score[i]);
	}
	sort(rankingArray.begin() + 5, rankingArray.end());
	cout << "2�� �ְ� ���� �л�>> " << rankingMap[rankingArray[9]] << ", " << "���� ���� �л�>> " << rankingMap[rankingArray[5]] << endl;

	for (int i = 10; i < 15; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		rankingMap[score[i]] = name[i];
		rankingArray.push_back(score[i]);
	}
	sort(rankingArray.begin() + 10, rankingArray.end());
	cout << "3�� �ְ� ���� �л�>> " << rankingMap[rankingArray[14]] << ", " << "���� ���� �л�>> " << rankingMap[rankingArray[10]] << endl;


}



void Statistics::ascendingInClass()
{
	vector<float> v;
	vector<float>::iterator it;
	for (int i = 0; i < 5; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		grade[score[i]] = name[i];
		v.push_back(score[i]);
	}
	sort(v.begin(), v.begin() + 4);
	

	cout << "1���� ���� ��������>> ";
	for (it = v.begin(); it !=v.end();it++) {
		cout << grade[*it] << ":" << *it;
	}
	cout << endl;
	
		
	for (int i = 5; i < 10; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		grade[score[i]] = name[i];
		v.push_back(score[i]);
	}
	sort(v.begin() + 5, v.begin() + 10);
	cout << "2���� ���� ��������>> ";
	for (it = v.begin() + 5; it != v.begin() + 10; it++) {
		cout << grade[*it] << ":" << *it;
	}
	cout << endl;
	
	for (int i = 10; i < 15; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		grade[score[i]] = name[i];
		v.push_back(score[i]);
	}
	sort(v.begin() + 10, v.begin() + 15);
	cout << "3���� ���� ��������>> ";
	for (it = v.begin() + 10; it != v.begin() + 15; it++) {
		cout << grade[*it] << ":" << *it;
	}
	cout << endl;
	
}