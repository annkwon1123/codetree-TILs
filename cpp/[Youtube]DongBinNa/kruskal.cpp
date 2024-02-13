// 가장 적은 비용으로 모든 노드를 연결하기 위해 사용하는 알고리즘
// 노드 = 정점 = 도시: 그래프에서 동그라미
// 간선 = 거리 = 비용: 그래프에서 선

// 간선을 거리가 짧은 순서대로 그래프에 포함 시키는 것(사이클이 형성되면 안됨.)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getParent(int parent[], int x) {
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent, parent[x]);
}

int unionParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a<b) parent[b] = a;
    else parent[a] = b;
}

int findParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a == b) return 1;
    return 0;
}

// 간선 클래스
class Edge {
    public:
        int node[2];
        int distance;

        Edge(int a, int b, int distance) {
            this->node[0] = a;
            this->node[1] = b;
            this->distance = distance;
        }

        bool operator <(Edge &edge) {
            return this->distance < edge.distance;
        }
};

int main() {
    int n = 7;
    int m = 11;

    vector<Edge> v;
    v.push_back(Edge(1, 7, 12));
    v.push_back(Edge(1, 4, 28));
    v.push_back(Edge(1, 5, 17));
    v.push_back(Edge(1, 2, 67));
    v.push_back(Edge(2, 4, 24));
    v.push_back(Edge(2, 5, 62));
    v.push_back(Edge(1, 4, 28));
    v.push_back(Edge(1, 5, 17));
    v.push_back(Edge(1, 2, 67));
    v.push_back(Edge(7, 4, 13));
    v.push_back(Edge(7, 5, 1));


    sort(v.begin(), v.end());

    int parent[n];
    for(int i = 0; i <n; i++) {
        parent[i] = i;
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(!findParent(parent, v[i].node[0]-1, v[i].node[1]-1)) {
            sum += v[i].distance;
            unionParent(parent, v[i].node[0] - 1, v[i].node[1]-1);
        }
    }
}