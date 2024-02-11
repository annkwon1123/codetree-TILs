#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

class Distance {
    public:
        int x,y, number;

        Distance(int x, int y, int number) {
            this->x = x;
            this->y = y;
            this->number = number;
        }

        Distance(){}
};

Distance distances[MAX_N];

bool Cmp(Distance a, Distance b) {
    int dis_a = a.x * a.x + a.y * a.y;
    int dis_b = b.x * b.x + b.y * b.y;
    if(dis_a == dis_b) return a.number > b.number;
    return dis_a < dis_b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        distances[i] = Distance(a, b, i+1);
    }

    sort(distances, distances+n, Cmp);

    for(int i = 0; i < n; i++) {
        cout << distances[i].number << endl;
    }
    return 0;
}