#include <iostream>
using namespace std;

int main(){
    int N; // 정수형 변수 N 선언
    cin >> N; // 키보드로 입력받은 데이터를 N에 저장한다
    for(int s = 1; s < 10; s++){ // 정수형 변수 s를 선언하고 1을 저장한다. 그리고 for문 내부 코드가 끝났을때 s가 10보다 작다면 s값을 1 증가시킨다.
        cout << N << " * " << s << " = " << N * s; // 화면에 N * s = N*s를 띄운다
            if(s != 9){ // s의 값이 9가 아닐때 
                cout << endl; // 화면 창의 줄바꿈을 한다.
            }
    }
    return 0;
}