#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int x){
        val=x;
        next=NULL;
    }
}; 
void display(node *head){
    while (head){
        cout<<head->val<<" ";
        head=head->next;   
    }
}
node* reverse(node *head){
    node *pre=NULL,*n1=NULL;
    while (head){
        n1=head->next;
        head->next=pre;
        pre=head;
        head=n1;
    }
    display(pre);
}
void middle(node *head){
    node *fast=head;
    while (fast->next && fast->next->next){
        head=head->next;
        fast=fast->next->next;
    }
    cout<<head->val<<endl;
}
int main(){
    node *n1=new node(1);
    node *n2=new node(2);
    n1->next=n2;
    node *n3=new node(3);
    n2->next=n3;
    node *n4=new node(4);
    n3->next=n4;
    node *n5=new node(5);
    n4->next=n5;
    node *h1=new node(1);
    node *h2=new node(2);
    h1->next=h2;
    node *h3=new node(3);
    h2->next=h3;
    node *h4=new node(4);
    h3->next=h4;
    node *h5=new node(5);
    h4->next=h5;
    middle(n1);
    reverse(n1);
    cout<<endl;
    return 0;
}