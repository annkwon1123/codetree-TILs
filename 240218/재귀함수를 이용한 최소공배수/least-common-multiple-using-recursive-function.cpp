#include <iostream>
#include <algorithm>
#define MAX_N 10
using namespace std;

int arr[MAX_N];

// Function to calculate Greatest Common Divisor (GCD)
int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

// Function to calculate Least Common Multiple (LCM)
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = LCM(lcm, arr[i]);
    }
    
    cout << lcm;
    
    return 0;
}