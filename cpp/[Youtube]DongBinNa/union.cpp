// Union Find 알고리즘

#include <iostream>
using namespace std;

int getParent(int parent[], int x) {
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent, parent[x]);
}

int unionParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}

int findParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a == b) return 1;
    return 0;
}

int main() {
    int parent[11];
    for(int i = 0 ; i < 11; i++) {
        parent[i] = i;
    }

    unionParent(parent, 1, 2);

}