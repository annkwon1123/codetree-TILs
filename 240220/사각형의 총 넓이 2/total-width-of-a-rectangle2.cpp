#include <iostream>
#define MAX_N 200
#define OFFSET 100
using namespace std;

int arr[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;
        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                arr[j][k] = 1;
            }
        }

    }

    int tot = 0;
    for(int j = 0; j < MAX_N; j++) {
        for(int k = 0; k < MAX_N; k++) {
            if(arr[j][k] == 1) tot ++;
        }
    }
    cout << tot;
    return 0;
}