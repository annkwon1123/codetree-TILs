#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool StartT(string a, string T) {
    for(int j = 0; j < T.length(); j++) {
        if(a[j] != T[j]) return false;    
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, index = 0;
    cin >> n >> k ;
    string T;
    cin >> T;
    string arr[n];
    string arrT[n];
    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
        if(StartT(arr[i], T)) arrT[index++] = arr[i];
    }
    sort(arrT, arrT+index+1);
    cout << arrT[k];
    return 0;
}