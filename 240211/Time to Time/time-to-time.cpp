#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int time = (c-a)*60;
    if(d-b > 0) time += d-b;
    else time += (d-b)%60;

    cout << time << endl;
    return 0;
}