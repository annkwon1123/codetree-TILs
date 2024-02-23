#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, pair<int, int> > p1, pair<int, pair<int, int> > p2) {
    return p1.first < p2.first;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K, T, P;
    cin >> N >> K >> P >> T;

    int people[N+1] = {0, }; // N명의 개발자
    people[P] = 1; // 처음 전염병에 걸려 있는 개발자
    vector<pair<int, pair<int, int> > > v; // 시간과 악수 상대

    int t, x, y;
    for(int i = 0; i < T; i++) {
        cin >> t >> x >> y;
        v.push_back(pair<int, pair<int, int> >(t, pair<int, int>(x, y)));
    }
    sort(v.begin(), v.end(), compare); // 시간 순 대로 정열

    for(int i = 0; i < T; i++) {
        x = v[i].second.first;
        y = v[i].second.second;
        
        if(people[x] <= K && (people[x] > 0 && people[y] == 0)) {
            people[x]++;
            people[y]++;
        }
        else if(people[y] <= K && (people[y] > 0 && people[x] == 0)) {
            people[x]++;
            people[y]++;
        }
    }

    for(int i = 1; i < N+1; i++) {
        if(people[i] > 0) cout << 1;
        else cout << 0;
    }

    return 0;
}