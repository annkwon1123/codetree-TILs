#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    getchar(); // 버퍼에서 개행문자를 제거합니다.

    char c;
    int d;
    int loc[2] = {0, 0}; // 초기 위치를 (0, 0)으로 설정합니다.

    for(int i = 0; i < n; i++) {
        scanf("%c %d", &c, &d);
        getchar(); // 버퍼에서 개행문자를 제거합니다.


        // 각각의 방향에 따라 위치를 업데이트합니다.
        if(c == 'N') {
            loc[1] += d; 
        } else if(c == 'E') {
            loc[0] += d;
        } else if(c == 'S') {
            loc[1] -= d;
        } else if(c == 'W') {
            loc[0] -= d;
        }
    }

    printf("%d %d", loc[0], loc[1]);
    return 0;
}