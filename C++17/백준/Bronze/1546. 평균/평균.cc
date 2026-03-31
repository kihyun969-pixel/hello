#include <iostream>
using namespace std;

int main() {
	float grade[1000];
	int subject = 0, max = 0;
	float sum = 0, average = 0;

	// 과목 수 입력
	cin >> subject;

	// 과목 수 만큼 점수 입력
	for (int i = 0; i < subject; i++) {
		while (true) {
			cin >> grade[i];
			if (grade[i] <= 100 and grade[i] >= 0) {
				break;
			}
		}
	}

	// 최대점수 구하기
	for (int i = 0; i < subject; i++) {
		if (grade[i] > max) {
			max = grade[i];
		}
	}

	// 점수 조정하기
	for (int i = 0; i < subject; i++) {
		grade[i] = grade[i] / max * 100;
		sum += grade[i];
	}

	// 평균 구하고 출력하기
	average = sum / subject;
	cout << average;

	return 0;
}