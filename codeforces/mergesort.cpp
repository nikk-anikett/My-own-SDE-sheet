#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
void print(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void mergeTwolist(ListNode* list1,ListNode* list2){
    ListNode* pre=new ListNode(-1);
    ListNode* prev=pre;
    while (list1 and list2)
    {
        if(list1->val < list2->val){
            ListNode* temp=new ListNode(list1->val);
            prev->next=temp;
            prev=temp;
            list1=list1->next;
        }else{
            ListNode* temp=new ListNode(list2->val);
            prev->next=temp;
            prev=temp;
            list2=list2->next;
        }
    }
    while(list1){
        ListNode* temp=new ListNode(list1->val);
        prev->next=temp;
        prev=temp;
        list1=list1->next;
    }
    while(list2){
        ListNode* temp=new ListNode(list2->val);
        prev->next=temp;
        prev=temp;
        list2=list2->next;
    }
    pre=pre->next;
    while(pre){
        cout<<pre->val<<" ";
        pre=pre->next;
    }
}
int main(){
    ListNode* n1=new ListNode(1);
    ListNode* n2=new ListNode(2);
    ListNode* n3=new ListNode(3);
    ListNode* n4=new ListNode(4);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    ListNode* n21=new ListNode(5);
    ListNode* n22=new ListNode(6);
    ListNode* n23=new ListNode(7);
    ListNode* n24=new ListNode(8);
    n21->next=n22;
    n22->next=n23;
    n23->next=n24;
    // print(n21);
    mergeTwolist(n1,n21);
    return 0;
}