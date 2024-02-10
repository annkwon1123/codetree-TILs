#include <iostream>
using namespace std;

int Ans(int a, char o, int b) {
    if(o == '+') {
        return a+b;
    } else if(o == '-') {
        return a-b; 
    } else if(o == '/') {
        return a/b;
    } else if(o == '*'){
        return a*b;
    }
    return -999;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;

    if(Ans(a, o, c) != -999){
        cout << a << " " << o << " " << c << " = " << Ans(a, o, c) << endl; 
    } else {
        cout << "False" << endl;
    }
    return 0;
}