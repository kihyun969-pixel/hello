#include <stdio.h>

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if(a >= 1 && a < 10001 && b >=1 && b <10001){
        printf("%d\n", a + b);
        printf("%d\n", a - b);
        printf("%d\n", a * b);
        printf("%d\n", a / b);
        printf("%d\n", a % b);
    }
    return 0;
}