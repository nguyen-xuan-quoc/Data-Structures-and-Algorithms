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

node *addElement(node*p, int x){
    node *temp = createNode(x);
    p->next = temp;
    return temp;
}

node *addHead(node*l, int x){
    node *temp = new node;
    temp->data = x;
    temp->next = l;
    //l = temp;
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

node *add(int k, int x, node*l){
    node *p = l;
    for(int i = 0; i < k-1; i++){
        p = p->next;
    }
    node *temp = new node;
    temp->data = x;
    temp->next = p->next;
    p->next = temp;
    return l;
}

void printList(node *l){
	node *p = l;
	while (p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}

int main(){
    int n,x;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *s = l;
    for(int i = 1; i < n; i++){
        cin >> x;
        s = addElement(s, x);
    }
    int k, a;
    cin >> k;
    cin >> a;
    if(k == 0){
        l = addHead(l, a);
    } else if(k == n){
        l = addTail(l, a);
    } else{
        l = add(k, a, l);
    }
    printList(l);
    return 0;
}