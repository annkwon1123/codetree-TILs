// 백준 11726

//2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
//아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.

// 입력
// 2

// 출력
// 2

#include <iostream>
using namespace std;

int dyn[1000];

int tiling(int n) {
    if(n <= 1) return 1;
    if(n == 2) return 2;
    if(dyn[n] != 0) return dyn[n];
    return dyn[n] = (tiling(n-2) + tiling(n-1)) % 10007;
}

int main() {
    int n;
    cin >> n;
    cout << tiling(n);
}