#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen 함수를 위해 가져옴. <- 쓸데없는 배열 공간까지 실행하기 싫어서 가져옴.

int main() {
	char str[101];

	scanf("%s", str);
	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		for (int s = 0; s < 26; s++) {
			if (str[i] == 65 + s) {
				str[i] = 97 + s;
				break;
			}

			else if(str[i] == 97 + s) {
				str[i] = 65 + s;
				break;
			}
		}
	}
	printf("%s", str);

	return 0;

}