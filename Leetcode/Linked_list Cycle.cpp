bool hasCycle(ListNode *head) {
        map <ListNode*,int>mp;
        int c=0,flag=-1;
        while(head!=NULL)
        {
            if(mp.find(head)==mp.end())
             mp[head]=c++;
            else
             return true;
            head=head->next;
        }
        return false;       

    }
