// 이름, 성적, 생년월일이 있을 때 이중페어 사용후 정렬

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare (pair<string, pair <int, int> > a, pair<string, pair <int, int> > b) {
    if(a.second.first == b.second.first) return a.second.second < b.second.second;
    else return a.second.first < b.second.first;
}

int main() {
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> >("Kwon", pair<int, int>(100, 01123)) );
    v.push_back(pair<string, pair<int, int> >("So", pair<int, int>(100, 01123)) );
    v.push_back(pair<string, pair<int, int> >("Yeon", pair<int, int>(100, 01123)) );
    v.push_back(pair<string, pair<int, int> >("Kwon", pair<int, int>(100, 01123)) );

    // size = 6
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << " ";
    }
    return 0;
}