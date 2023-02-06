#include<bits/stdc++.h>
using namespace std;
class node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void merge(node* list1,node* list2){
    node* n=NULL;
    node* temp=NULL;
    while(list1 && list2){
        if(list1->data > list2->data){
            n=list2->next
            n;
        }
        else if(list1->data < list2->data){
            n=list1->next
            list1->next=list2;
            list1=n;
        }
        else{
            list1=list1->next;
            list2=list2->next;
        }
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