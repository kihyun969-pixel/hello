#include <iostream> // input/output Stream의 약자 -> 화면에 글자를 출력하거나 키보드로 입력받는 기능을 수행할 수 있도록 하는 파일
//

int main(){
    std::cout << "Hello World!"; // std(네임스페이스) -> 우리가 필요한 모든 표준 라이브러리 정의를 포함하고 있음.
                                 // cout -> console output의 약자로 모든 데이터가 화면에 출력될 수 있게 한다.
                                 // << -> 데이터를 어느 방향으로 보낼지에 대한 것으로, 현재 "Hello World!"를 std::cout 방향으로 보낸다.
                                 // 따라서 "Hello World!"를 cout의 기능에 따라 화면에 출력한다.
    return 0;
    
}