/*100의 배수가 400의 배수가 아닐 수가 없기 때문에 &&아닌 || 게이트를 사용*/

#include <iostream> // 입출력을 담당하는 코드를 불러오는 파일
using namespace std; // std 네임스페이스에 포함되는 코드들의 std를 생략가능하게 하는 코드.

int main (){
    int a, b, c; // 정수형 변수 a, b, c 선언
    unsigned int year; // 0과 양수형 정수 변수인 year 선언
    cin >> year; // year라는 변수에 키보드로 입력된 값을 대입
    
    if (year <= 4000 && year > 0){ // 입력된 year의 값이 0 < year <= 4000
        a = year % 4; // a라는 변수에 year을 4로 나눈 값의 나머지를 대입
        b = year % 100; // b라는 변수에 year을 100으로 나눈 값의 나머지를 대입
        c = year % 400; // c라는 변수에 year을 400으로 나눈 값의 나머지를 대입
        if(a == 0 && b != 0 || c == 0){ // a의 값이 0 이고 b가 0이 아니거나 c가 0(b의 값과 c의 값 중 하나가 true)일때
            cout << "1";        // 1을 화면에 출력한다
        }
        else {
            cout << "0"; // 0을 화면에 출력한다.
        }
    }
    return 0;
}