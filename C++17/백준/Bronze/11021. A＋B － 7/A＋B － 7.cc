#include <iostream>
using namespace std;

int main(){
    int loop;
    int flag;
    cin >> loop;
    
    for(int s = 1; s < loop+1; s++){
        int a, b;
        flag = 1;
        while (flag == 1){
        cin >> a >> b;
            if(a < 10 && b < 10){
                flag = 0;
            }
        }
        cout << "Case #" << s << ": " << a + b;
        if(s < loop){
            cout << "\n";
        }
    }
    return 0;
}