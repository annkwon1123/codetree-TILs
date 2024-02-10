#include <iostream>
using namespace std;

bool Sucessive(int a, int b, int* arrA, int* arrB) {
    for(int i = 0; i <= a-b; i++) {
        if(arrA[i] == arrB[0]) {
            for(int j = 1; j < b; j++) {
                if(arrA[i+j] != arrB[j]) break;
                return true;
            }
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int arrA[a];
    int arrB[b];
    for(int i = 0; i < a; i++) cin >> arrA[i];
    for(int i = 0; i < b; i++) cin >> arrB[i];
    if(Sucessive(a,b, arrA, arrB)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}