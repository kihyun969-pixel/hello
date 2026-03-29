#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int round = 0;
	int dice1, dice2;
	int score1 = 100, score2 = 100;

	scanf("%d", &round);

	if (round > 0 && round <= 15) {
		for (int i = 0; i < round; i++) {
			scanf("%d %d", &dice1, &dice2);

			if (dice1 < dice2) {
				score1 -= dice2;
			}
			else if (dice1 > dice2) {
				score2 -= dice1;
			}

		}
	}

	printf("%d\n%d", score1, score2);

	return 0;

}
