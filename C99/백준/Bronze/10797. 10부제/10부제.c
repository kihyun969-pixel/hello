#include <stdio.h>

int main() {
	int today;
	int Carnum;
	int count = 0;

	scanf("%d", &today);

	for (int s = 0; s < 5; s++) {
		scanf("%d", &Carnum);
		if (Carnum == today) {
			count += 1;
		}
	}

	printf("%d", count);
	return 0;
}