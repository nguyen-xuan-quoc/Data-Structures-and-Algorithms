#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node *createNode(int x){
    node *temp = new node;
    temp->next = NULL;
    temp->data = x;
}

node *addElement(node*l, int x){
    node *temp = createNode(x);
    l->next = temp;
    return temp;
}

node *solve(node*l, int k, int x){
    node *p = l;
    while(p != NULL){
        if(p->data == k){
            p->data = x;
        }
        p = p->next;
    }
    return l;
}

void printList(node *l){
    node *p = l;
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    int n,x;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for(int i = 1; i < n; i++){
        cin >> x;
        p = addElement(p, x);
    }
    int a, b;
    cin >> a >> b;
    l = solve(l, a, b);
    printList(l);
    return 0;
}