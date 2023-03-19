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
void print(node* head){
    cout<<head->val<<" ";
    head=head->next;
}

void addnum(node* l1,node* l2){
    node* sum=new node(0); 
    node* prev=sum;
    int res=0,carry=0;
    while(l1 or l2 or carry){
        if(l1){
            res+=l1->val;
            l1=l1->next;
        }
        if(l2){
            res+=l2->val;
            l2=l2->next;
        }
        res+=carry;
        carry=res/10;
        node* temp=new node(res%10);
        prev->next=temp;
        prev=temp;
        res=0;
    }
    
    sum=sum->next;
    // print(sum);
    while (sum){
        cout<<sum->val<<" ";
        sum=sum->next;
    }
    
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