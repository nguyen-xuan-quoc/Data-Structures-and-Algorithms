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

node *addTail(node*l, int x){
    node*p = l;
    while(p->next != NULL){
        p = p->next;
    }
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    p->next = temp;
    return l;
}

node *getNode(node*l, int k){
    node*p = l;
    for(int i = 0; i < k; i++){
        p= p->next;
    }
    return p;
}

node *Solve(node*l, int k){
    node *p = l;
    node *ans = new node;
    while(p != NULL){
        if(p->data <= k){
            ans = createNode(p->data);
            p = p->next;
            break;
        }
        p = p->next;
    } 
    while(p != NULL){
        if(p->data <= k){
            ans = addTail(ans, p->data);
        }
        p = p->next;
    }
    return ans;
}

void printList(node*l){
    node*p = l;
    while(p!=NULL){
        cout << p->data <<" ";
        p = p->next;
    }
}



int main(){
    int n, x;
    cin >> n >> x;
    node*l = createNode(x);
    node*p = l;
    for(int i = 1; i < n; i++){
        cin >> x;
        p = addElement(p, x);
    }
    int k;
    cin >> k;
    l = Solve(l, getNode(l, k)->data);
    printList(l);
    return 0;
}