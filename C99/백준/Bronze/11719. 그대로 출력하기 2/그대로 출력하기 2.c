#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	int c;
	
	while ((c = getchar()) != -1) {
		putchar(c);
	}
	return 0;
}