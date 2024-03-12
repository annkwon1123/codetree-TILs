#include <iostream>
#define MAX_N 100
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int arr[MAX_N] ={0, };
    for(int i = x1; i <= x2; i++) {
        arr[i]++;
    }
    for(int i = x3; i <= x4; i++) {
        arr[i]++;
    }
    bool IsIntersect = false;

    for(int i = 0; i < MAX_N; i++) {
        if(arr[i] > 1) IsIntersect = true;
    }
    if(IsIntersect) cout << "intersecting";
    else cout << "nonintersecting";
    return 0;
}