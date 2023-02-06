#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *next;
    node(int x){
        val=x;
        next=NULL;
    }
};
int reverse(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        sum=sum*10+rem;
    }
    return sum;
}
void res(int num){
    
    node* ptr=new node(0);
    node* temp=ptr;
    while(num>0){
        int rem=num%10;
        num/=10;
        node* n1=new node(rem);
        temp->next=n1;
        temp=temp->next;
    }
    while(ptr){
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
}
void addnum(node* l1,node* l2){
    node* t1=l1;
    node* t2=l2;
    int sum1=0,sum2=0;
    while(t1){
        sum1=sum1*10+t1->val;
        t1=t1->next;
    }
    while(t2){
        sum2=sum2*10+t2->val;
        t2=t2->next;
    }
    res(reverse(sum1)+reverse(sum2));  
}
int main(){
    node* n1=new node(2);
    node* n2=new node(4);
    node* n3=new node(3);
    node* n11=new node(5);
    node* n12=new node(6);
    node* n13=new node(4);
    n1->next=n2;
    n2->next=n3;
    n11->next=n12;
    n12->next=n13;
    addnum(n1,n11);
    return 0;
}