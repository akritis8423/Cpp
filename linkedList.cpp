#include<iostream>
using namespace std;

// node creation.....................

struct node{
    int data;
    struct node *next;
}*first=NULL;

void createList(int a[], int n){
    int i;
    struct node *t, *last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++){
        t=new node;
        t->data= a[i];
        t->next= NULL;
        last-> next=t;
        last=t;

    }

}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data;
        p=p->next;
    }
}
int main(){
    struct node *ptr;
    int a[]={3,4,5,6,7,8};
    createList(a,6);
    display(first);
    return 0;
    

}