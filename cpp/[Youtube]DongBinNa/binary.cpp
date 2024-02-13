// 이진트리에서 순회하는 세 가지 방법
// 전위 순회 나> 왼> 오
// 중위 순회 왼> 나> 오
// 후위 순회 오> 왼> 나

#include <iostream>
using namespace std;

int number  = 15;

typedef struct node *treePointer;
typedef struct node {
    int data;
    treePointer leftChild, rightChild;
} node;

void preOrder(treePointer ptr) {
    if(ptr) {
        cout << ptr->data << ' ';
        preOrder(ptr->leftChild);
        preOrder(ptr->rightChild);
    }
}

void inOrder(treePointer ptr) {
    if(ptr) {
        inOrder(ptr->leftChild);
        cout << ptr->data << ' ';
        inOrder(ptr->rightChild);
    }
}

void postOrder(treePointer ptr) {
    if(ptr) {
        postOrder(ptr->rightChild);
        postOrder(ptr->leftChild);
        cout << ptr->data << ' ';
    }
}

int main() {
    node nodes[number +1];
    for(int i = 0; i < number; i ++) {
        nodes[i].data = i;
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;
    }
    for(int i = 0; i < number; i++) {
        if(i%2 == 0) {
            nodes[i/2].rightChild = &nodes[i];
        } else {
            nodes[i/2].rightChild = &nodes[i];
        }
    }
    preOrder(&nodes[1]);
    return 0;
}