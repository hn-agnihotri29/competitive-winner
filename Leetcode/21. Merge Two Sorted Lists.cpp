ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *dummy, *cur;
        dummy = new ListNode();
        cur = dummy;
        
        while(list1 && list2) {
            if(list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
            } 
            cur = cur -> next;

        }
        if(!list1)
            cur -> next = list2;
        else
            cur -> next = list1;
    
        return dummy->next;;

    }
