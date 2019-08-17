// https://leetcode.com/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) {
        
           if(head == nullptr)
        
     {
         //std::cout<<"Case 1!"<<std::endl;
         return NULL;
     }      
        
        
          if(head->next == NULL)
     {
         //std::cout<<"Case 2!"<<std::endl;
         return NULL;
     }
        

        
     ListNode* temp1;
     ListNode* temp2;
     
     temp1 = temp2  = head;
        
     while(temp2 && temp2->next)
     {
         temp1 = temp1->next;
         temp2 = temp2->next->next;
         if(temp1==temp2)
         {
             temp2 = head;
             while(temp1->next && temp2->next)
             {
             
                 if(temp1 == temp2)
                 {
                     return temp1;
                 }
                 temp1 = temp1->next;
                 temp2 = temp2->next;
                 
             }
             
         }
         
     }
        return NULL;
        
        
        
    }
};
