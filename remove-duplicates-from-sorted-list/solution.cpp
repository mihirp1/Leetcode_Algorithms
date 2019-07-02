//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        
      std::map<int,int> m;
        ListNode* temp = head;
        ListNode* current=head;
        if(head==NULL)
        {
            return head;
        }
        
        while(temp->next != NULL)
        {
            if(temp->val == (temp->next)->val)
            {
                temp->next = (temp->next)->next;
                temp = current;
                continue;
            }
            
            current = temp;
            temp=temp->next;
            
        }
            
    return head;        
            
    }
