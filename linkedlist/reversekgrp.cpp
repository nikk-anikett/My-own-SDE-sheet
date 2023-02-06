#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node* reverse(node* head){
    node* pre=NULL;
    node* cur=head;
    node* n;
    while(pre){
        n=cur->next;
        cur->next=pre;
        pre=cur;
        cur=n;
    }
    return pre;
}
void reversek(node* head){
    node* temp=head;
    int c=2;
    while(temp){
        if(c==2){
            temp->next=reverse(temp->next);
            c=0;
        }
        temp=temp->next;
        c++;
    }
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
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
    reversek(n1);
    return 0;
}