#include <iostream> // 입출력을 담당하는 코드를 포함하는 파일을 불러오는 코드
using namespace std; // std 네임스페이스에 포함되는 코드들의 std를 생략할 수 있는 코드

int main(){
    int loop; // 정수형 변수 loop 선언 -> for문을 몇번 반복시킬지 결정한다.
    cin >> loop; // 키보드로 입력 받은 값을 loop 변수에 저장한다.
    
    for(int s = 0; s < loop; s++){ // 정수형 변수 s 선언과 변수에 0을 저장, for문 내부코드가 끝났을 때 s의 값이 loop보다 작다면 s의 값을 1 증가한다.
        int a, b; // 정수형 변수 a, b 선언 -> A + B 연산에 쓰일 입력값을 저장하기 위해 선언되는 변수이다.
        while (true){ // flag값이 true일때 코드를 반복한다.
        cin >> a >> b; // a와 b의 값을 키보드로부터 입력받는다.
            if(a < 10 && b < 10){ // a가 10보다 작고, b가 10보다 작을때 내부 코드를 실행한다.
                break;
            }
        }
        cout << "Case #" << s+1 << ": " << a + b; // Case #(s+1): (a + b)를 화면에 출력하는 코드
        if(s < loop - 1){ // s가 (loop - 1)보다 작을때
            cout << "\n"; // 줄바꿈을 한다.
        }
    }
    return 0;
}