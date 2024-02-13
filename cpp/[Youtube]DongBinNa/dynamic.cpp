// 문제의 종류가 굉장히 많음 
// 다이나믹 DP, 동적계획법
// 한번 해결한 값은 다시 풀지 않고 저장함. -> 하나의 문제를 단 한 번만

// 대표적인 예시로는 피보나치 수열이 있다.
// 작은 문제의 정답이 큰문제의 정답과 동일하다.
// 메모제이션

#include <stdio.h>

int d[100];

int dp(int x) {
    if(x == 1) return 1;
    if(x == 2) return 1;
    if(d[x] != 0) return d[x]; 
    return d[x] = dp(x-1) + dp(x-2);
}

int main() {
    printf("%d", dp(50));
}