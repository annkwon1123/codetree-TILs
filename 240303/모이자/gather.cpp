#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int min_sum = 99999999;
    for(int i = 0; i < n; i++) {

        int sum_diff = 0;
        for(int j = 0; j < n; j++) {
            sum_diff += arr[j] * abs(j - i);
        }

        min_sum = min(min_sum, sum_diff);
        sum_diff = 0;
    }

    cout << min_sum;
    return 0;
}