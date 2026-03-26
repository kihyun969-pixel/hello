#include <iostream>
using namespace std;

int main() {
	int max, min, a, len;


	cin >> len;
	if (len > 0 and len <= 1000000) {
		for (int i = 0; i < len; i++) {

			while (true) {
				cin >> a;
				if (a >= -1000000 and a <= 1000000) {
					break;
				}
			}
			if (i == 0) {
				max = a;
				min = a;
			}
			//최댓값
			if (a > max) {
				max = a;
			}
			//최솟값
			if (a < min) {
				min = a;
			}
		}
	}
	cout << min << " " << max << endl;
	return 0;
}