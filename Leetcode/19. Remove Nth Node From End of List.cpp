 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0,c1=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(n==c)
         return head->next;
            temp=head;
            c=c-n-1;
            while(c--)
            {
                temp=temp->next;
            }
        
        temp->next=temp->next->next;
        return head;
 }
