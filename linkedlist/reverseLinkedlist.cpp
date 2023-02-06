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
node* reverse(node* cur){
    // node* cur=head;
    node* pre=NULL;
    node* n=NULL;
    while (cur!=NULL)
    {
        n=cur->next;
        cur->next=pre;
        pre=cur;
        cur=n;
    }
    while (pre!=NULL)
    {
        cout<<pre->data<<" ";
        pre=pre->next;   
    }
}
int main(){
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node* n4=new node(40);
    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    reverse(head);
    // print(head);
    return 0;
}