/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        auto temp = head;
        
        if(!head)
        {
            return NULL;
        }
        
        if(temp->next==NULL)
        {
            if(temp->val == val)
            {
                return NULL;
            }
            else
                return head;
        }
        
        while(temp != NULL)
        {
            std::cout<<temp->val<<std::endl;
            if(temp->next && temp->next->val == val)
            {
                if(temp->next->next)
                    temp->next = temp->next->next;
                else
                    temp->next = NULL;
            }
            temp = temp->next;
            
            
        }
     return head;   
    }
};
