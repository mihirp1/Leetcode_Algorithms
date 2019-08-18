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
        
        if(!temp)
        {
            return NULL;
        }
        
        /* If node located at the beginning */
        while(head->val == val)
        {
            if(head->next)
            head = head->next;
            else
            {
                return NULL;
            }
        }
        
        auto p1 = head;
        auto p2 = head;
        if(head->next)
          p2 = head->next;
        else
            return head;
        while(p2)
        {
            
            std::cout<<p1->val << " "<<p2->val<<std::endl;
            
            if(p2->val == val)
            {
                if(p2->next)
                {
                    p1->next = p2->next;
                    p2 = p1->next;
                    continue;
                }
            }

            
            if(p2->next == NULL && p2->val == val)
            {
                p1->next = NULL;
                std::cout << p1->val<<std::endl;
            }
            p1 = p1->next;
            p2 = p2->next;
            
        }
        
      
        return head;
    }
};
