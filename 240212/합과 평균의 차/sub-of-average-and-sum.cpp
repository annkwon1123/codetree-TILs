#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a>> b>> c;
    int total, avg;
    total = a+b+c;
    avg = total/3;
    cout << total << endl;
    cout << avg << endl;
    cout << total - avg << endl;
    return 0;
}