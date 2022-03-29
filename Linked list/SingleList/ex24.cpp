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
    return temp;
}

node *addElement(node*l, int x){
    node *temp = createNode(x);
    l->next = temp;
    return temp;
}

void printList(node *l){
    node *p = l;
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}

node *solve(node *l, int k){
    node*temp;
    node*p = l;
    for(int i = 0; i < k; i++){
        p = p->next;
    }
    temp = p;
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
    int k;
    cin >> k;
    node *a = solve(l, k);
    cout << a->data << endl;
}