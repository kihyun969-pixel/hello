#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N;
	char alpha[21];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int R;
		scanf("%d", &R);
		scanf("%s", alpha);
		int len = strlen(alpha);

		for (int s = 0; s < len; s++) {
			for (int j = 0; j < R; j++) {
				printf("%c", alpha[s]);
			}
		}
		printf("\n");
	}

	return 0;
}