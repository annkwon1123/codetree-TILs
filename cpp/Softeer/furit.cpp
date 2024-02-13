#include <iostream>
#define MAX_F 20
#define MAX_P 3
using namespace std;

int arr[MAX_F];
int people[MAX_P][2];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < m; i++) cin >> people[i][0] >> people[i][1];

    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

}