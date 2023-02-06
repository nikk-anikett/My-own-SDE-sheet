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
void print(node *head){
    node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void reverse(node* head){
    node* pre=NULL;
    node* t1=head;
    node* cur=head;
    
    node* n1;
    while(cur){
        n1=cur->next;
        cur->next=pre;
        pre=cur;
        cur=n1;
    }
   rev
}
void middle(node* head){
    node* slow=head;
    node* fast=head;
    fast=fast->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->val<<endl;
}
int main(){
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node* n4=new node(40);
    node* n5=new node(50);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    // reverse(n1);
    // print(n1);
    middle(n1);
}