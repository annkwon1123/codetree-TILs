#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    vector<int> arr;

    while(a > 0) {
        arr.push_back(a%b); // 나머지 저장
        a /= b ;
    } 

    for(int i = arr.size()-1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}