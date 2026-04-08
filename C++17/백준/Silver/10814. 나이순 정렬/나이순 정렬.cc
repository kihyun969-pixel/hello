/*#include <iostream>
#include <vector>

using namespace std;

struct Member {
	int num;
	string name;

};

int main() {
	int N;

	cin >> N;

	vector<Member> member(N);
	// 멤버 대입
	if (N > 0) {
		for (int i = 0; i < N; i++) {
			cin >> member[i].num >> member[i].name;
		}

		// 선택정렬 시작
		for (int i = 0; i < N - 1; i++) {
			int min_idx = i;

			for (int j = i + 1; j < N; j++) {
				if (member[j].num < member[min_idx].num) {
					min_idx = j;
				}
			}
			if (i != min_idx) {
				Member temp = member[i];
				member[i] = member[min_idx];
				member[min_idx] = temp;
			}
		}
	}
	// 멤버 목록
	for (int i = 0; i < N; i++) {
		cout << member[i].num << " " << member[i].name << "\n";
	}
	return 0;

}*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 사용자의 정보를 담을 구조체
struct Member {
    int age;
    string name;
};

// 정렬 기준을 정의하는 함수
// 나이가 적은 순서대로 정렬하도록 함
bool compare(const Member& a, const Member& b) {
    return a.age < b.age; 
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<Member> members(N);

    // 데이터 입력
    for (int i = 0; i < N; i++) {
        cin >> members[i].age >> members[i].name;
    }

    // 나이순으로 정렬하되, 입력 순서를 보장하는 stable_sort 사용
    stable_sort(members.begin(), members.end(), compare);

    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << members[i].age << " " << members[i].name << "\n";
    }

    return 0;
}