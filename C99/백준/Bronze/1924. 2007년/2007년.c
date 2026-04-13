#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int a, b;
	int day = 0;

	scanf("%d %d", &a, &b);

	for (int i = 0; i < a - 1; i++){
		day += month[i];
	}
	day += b;
	day -= 1;
	day %= 7;

	switch (day) {
	case 0: printf("MON\n"); break;
	case 1: printf("TUE\n"); break;
	case 2: printf("WED\n"); break;
	case 3: printf("THU\n"); break;
	case 4: printf("FRI\n"); break;
	case 5: printf("SAT\n"); break;
	case 6: printf("SUN\n"); break;
	}
}
