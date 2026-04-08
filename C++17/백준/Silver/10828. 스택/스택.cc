#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct CMD {
	string command;

};

int main() {
	int N;
	int top = -1;

	cin >> N;

	vector<int> field(N);
	vector<CMD> stack(N);

	for (int i = 0; i < N; i++) {
		cin >> stack[i].command;

		// 1.push 명령 -> 정수 X를 스택에 넣는 연산
		if (stack[i].command == "push") {
			top += 1;
			int value;
			cin >> value;
			field[top] = value;
		}
		// 2. pop 명령 -> 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.
		// 정수가 없는 경우 -1을 출력한다
		else if (stack[i].command == "pop") {
			if (top != -1) {
				cout << field[top] << "\n";
				top -= 1;
			}
			else {
				cout << -1 << "\n";
			}
		}
		// 3. size 명령 -> 스택에 들어있는 정수의 개수를 출력한다.
		else if (stack[i].command == "size") {
			cout << top + 1 << "\n";
		}
		// 4 empty 명령 -> 스택이 비어있으면 1, 아니면 0을 출력한다.
		else if (stack[i].command == "empty") {
			if (top != -1) {
				cout << 0 << "\n";
			}
			else {
				cout << 1 << "\n";
			}
		}
		// 5. top명령 -> 스택의 가장 위에 있는 정수를 출력한다.
		// 만약 스택에 들어있는 정수가 없는 경우에 -1을 출력한다.

		else if (stack[i].command == "top") {
			if (top != -1) {
				cout << field[top] << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}

	return 0;
}