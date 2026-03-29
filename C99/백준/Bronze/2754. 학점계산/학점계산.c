#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grade[3];
	float score = 4.0;

	scanf("%s", grade);

	for (int i = 0; i < 5; i++) {
		if (i < 4) {
			if (grade[0] == 65 + i) {
				//abcdf = i;
				score -= i;
			}

		}
		if (i == 4) {
			if (grade[0] == 65 + i + 1) {
				score -= i;
			}
		}
	}

	if (grade[1] == '0') {
		score = score;
	}
	else if (grade[1] == '+') {
		score += 0.3;
	}
	else if (grade[1] == '-') {
		score -= 0.3;
	}

	printf("%.1f", score);

	return 0;

}