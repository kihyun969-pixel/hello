#include <stdio.h>

int main() {
    int result = 0;

    for (int i = 0; i < 5; i++) {
        int a = 0;
        int flag = 1;
        
        while (flag == 1) {
            scanf("%d", &a);
            if (a >= 0 && a <= 10) {
                flag = 0;
            }
        }
        
        result += a;
        
    }

    printf("%d\n", result);

    return 0;
}