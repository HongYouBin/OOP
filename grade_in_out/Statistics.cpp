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
		cout << i + 1 << "반 평균>> " << average[i] << ", " << i + 1 << "반 표준편차>> " << standard[i] << endl;
	}
	vector<float> averageArray;
	map<float, int> averageMap;
	for (id = 0; id < 3; id++) {
		averageMap[average[id]] = id + 1;
		averageArray.push_back(average[id]);
	}
	sort(averageArray.begin(), averageArray.end());
	cout << "최고 평균 반>> " << averageMap[averageArray[2]] << ", " << "최저 평균 반>> " << averageMap[averageArray[0]] << endl;

	vector<float> standardArray;
	map<float, int> standardMap;
	for (id = 0; id < 3; id++) {
		standardMap[standard[id]] = id + 1;
		standardArray.push_back(standard[id]);
	}
	sort(standardArray.begin(), standardArray.end());
	cout << "최고 표준편차 반>> " << standardMap[standardArray[2]] << ", " << "최저 표준편차 반>> " << standardMap[standardArray[0]] << endl;
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
	cout << "전체 평균>> " << average << ", 전체 표준편차>> " << standard;
}

Statistics::Statistics()
{
	string line;
	ifstream fin("grade.txt");
	if (!fin) {
		cout << "grade.txt. 파일을 열 수 없습니다." << endl;
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
	cout << "1반 최고 점수 학생>> " << rankingMap[rankingArray[4]] << ", " << "최저 점수 학생>> " << rankingMap[rankingArray[0]] << endl;

	for (int i = 5; i < 10; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		rankingMap[score[i]] = name[i];
		rankingArray.push_back(score[i]);
	}
	sort(rankingArray.begin() + 5, rankingArray.end());
	cout << "2반 최고 점수 학생>> " << rankingMap[rankingArray[9]] << ", " << "최저 점수 학생>> " << rankingMap[rankingArray[5]] << endl;

	for (int i = 10; i < 15; i++) {
		int size = array[2 * i].size();
		name[i] = array[2 * i].substr(3, size - 5);
		score[i] = stof(array[2 * i + 1]);
		rankingMap[score[i]] = name[i];
		rankingArray.push_back(score[i]);
	}
	sort(rankingArray.begin() + 10, rankingArray.end());
	cout << "3반 최고 점수 학생>> " << rankingMap[rankingArray[14]] << ", " << "최저 점수 학생>> " << rankingMap[rankingArray[10]] << endl;


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
	

	cout << "1반의 성적 오름차순>> ";
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
	cout << "2반의 성적 오름차순>> ";
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
	cout << "3반의 성적 오름차순>> ";
	for (it = v.begin() + 10; it != v.begin() + 15; it++) {
		cout << grade[*it] << ":" << *it;
	}
	cout << endl;
	
}