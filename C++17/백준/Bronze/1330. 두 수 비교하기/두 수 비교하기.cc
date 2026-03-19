#include <iostream>
using namespace std;

int main(){
    int a, b;
    
    cin >> a >> b;
    if(a >= -10000 && a <= 10000 && b >= -10000 && b <= 10000){
        if (a > b){
            cout << ">";
        }
        if (a < b){
            cout << "<";
        }
        if(a == b){
            cout << "==";
        }
    }
    
    return 0;
    
}