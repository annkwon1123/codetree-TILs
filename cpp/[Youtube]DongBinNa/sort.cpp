// C++ STL sort() 함수 다루기

// 특정한 변수를 기준으로 정렬하는 방법
// 클래스는 실무에 효율적이지만, 시간이 오래걸림.
// 오늘은 페어 라이브러리를 사용해 보도록 하겠음. 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<pair<int, string> > v;
    v.push_back(pair<int, string>(90, "Park"));
    v.push_back(pair<int, string>(85, "Lee"));
    v.push_back(pair<int, string>(82, "Na"));
    v.push_back(pair<int, string>(98, "Kang"));
    v.push_back(pair<int, string>(79, "Lee2"));
    v.push_back(pair<int, string>(100, "Kwon"));

    // size = 6
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].second << ' ';
    }
    return 0;
}