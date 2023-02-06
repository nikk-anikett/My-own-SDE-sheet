class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
            return NULL;
        ListNode* slow=head,*temp=head,*fast=head;
        int n=0;
        while(temp){
          n++;
          temp=temp->next;
        }
        n=n/2;
        temp=head;
        for(int i=1;i<n+1;i++){
            if(i<n)
            slow=slow->next;
            fast=fast->next;
        } 
        slow->next=fast->next;
      return temp;
    }
};