// https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::map<ListNode*,int> hash;
        
        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }
        
        if(headA == headB)
        {
            return headA;
            
        }
        
        
        auto tempA = headA;
        auto tempB = headB;
        
        while(tempA != NULL)
        {
            
            hash[tempA] = 1;
            tempA = tempA->next;
        }
        
             while(tempB != NULL)
        {
            
            if(hash.count(tempB) > 0)
            {
               return tempB;
                
            }
            else
            {
                hash[tempB] = 1;
                
            }
            
            tempB = tempB->next;
        }
        
        
       return NULL; 
    }
};
