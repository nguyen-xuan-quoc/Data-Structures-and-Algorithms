#include<iostream>

using namespace std;

struct node
{
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

node *deleetHead(node*l){
    node *p = l;
    p = p->next;
    delete(l);
    return p;
}

node *deleteTail(node*l){
    node *p = l;
    while(p->next->next != NULL){
        p = p->next;
    }
    delete(p->next);
    p->next = NULL;
    return l;
}

node *deleteEl(int k, node*l){
    node *p = l;
    for(int i = 0; i < k-1; i++){
        p = p->next;
    }
    node *temp = p->next;
    p->next = p->next->next;
    delete(temp);
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
    node *p = l;
    for(int i = 1; i < n; i++){
        cin >> x;
        p = addElement(p, x);
    }
    int k;
    cin >> k;
    if(k == 0){
        l = deleetHead(l);
    } else if(k == n){
        l = deleteTail(l);
    } else {
        l = deleteEl(k, l);
    }
    printList(l);
    return 0;
}