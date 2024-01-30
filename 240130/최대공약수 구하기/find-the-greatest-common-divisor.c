#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d\n", &a, &b);
    for(int i = a; i > 0; i--) {
        for(int j = b; j > 0; j--) {
            if(i == j && a%i == 0 && b%j == 0) {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    return 0;
}