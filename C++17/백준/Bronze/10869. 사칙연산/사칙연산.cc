#include <iostream> // 입출력을 담당하는 파일 불러오기
using namespace std; // std 네임스페이스에 포함되는 요소에서 std를 붙이지 않아도 되도록 하는 코드

int main(){
    int a, b; // 정수형 변수 a와 b를 선언하는 코드
    
    cin >> a >> b; // cin -> 키보드로 입력받는 기능을 하는 코드로, 입력받은 값을 >> 방향에 따라 순차적으로 a 그리고 b에 저장한다.
    
    cout << a + b << endl; // cout -> 화면에 데이터를 출력하는 코드, 변수의 합인 a + b를 화면에 출력함
    cout << a - b << endl; // endl -> 줄바꿈을 담당한다.
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    
    return 0;
}
    