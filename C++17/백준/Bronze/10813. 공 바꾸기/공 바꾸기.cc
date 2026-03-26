#include <iostream>
using namespace std;

int main() {
	int N[100] = {0};
	int m;
	int len, times;

	cin >> len >> times;
	if (len <= 100 and times <= 100 and len > 0 and times > 0) {
		for (int i = 0; i < len; i++) {
			N[i] = i + 1;
		}

		for (int i = 0; i < times; i++) {
			int a, b;
			while (true) {
				cin >> a >> b;
				if (1 <= a and 1<= b and a <= 100 and b <= 100) {
					break;
				}
			}
			a -= 1;
			b -= 1;
			int temp = N[a];
			N[a] = N[b];
			N[b] = temp;
		}

		for (int i = 0; i < len; i++) {
			cout << N[i] << " ";
		}
	}
	return 0;

}