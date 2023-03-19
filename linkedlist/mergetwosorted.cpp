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
void merge(node* list1,node* list2){
    node* pre=new node(0);
        node* prev=pre;
        while(list1 && list2){
            if(list1->val < list2->val){
                node* temp=new node(list1->val);
                prev->next=temp;
                prev=temp;
                list1=list1->next;
            }else{
                node* temp=new node(list2->val);
                prev->next=temp;
                prev=temp;
                list2=list2->next;
            }
        }
        while(list1){
            node* temp=new node(list1->val);
            prev->next=temp;
            prev=temp;
            list1=list1->next;
        }
        while(list2){
            node* temp=new node(list2->val);
            prev->next=temp;
            prev=temp;
            list2=list2->next;
        }
    pre=pre->next;
    while (pre){
        cout<<pre->val<<" ";
        pre=pre->next;
    }
}
int main(){
    node* n1=new node(1);
    node* n2=new node(2);
    node* n3=new node(4);
    node* n11=new node(1);
    node* n12=new node(3);
    node* n13=new node(4);
    n1->next=n2;
    n2->next=n3;
    n11->next=n12;
    n12->next=n13;
    merge(n1,n11);
}