/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* new_list = new ListNode;
        ListNode* ans;
        
        if(l1 == NULL && l2 == NULL)
            return NULL;
        
        if(l1 && !l2) 
            return l1;
        
        if(l2 && !l1) 
            return l2;
        
        while(temp1  || temp2) {
            /*
            if(temp1)
            std::cout << "temp1->val " << temp1->val << std::endl;
             if(temp2)
            std::cout << "temp2->val " << temp2->val << std::endl;
             */        
            if(temp1 == l1 && temp2 == l2) {
                if(temp1->val <= temp2->val) {           
                    new_list = temp1;
                    //std::cout << "new_list->val " << new_list->val << std::endl;
                    ans = temp1;
                    temp1 = temp1->next;
                }
                else {                  
                    new_list = temp2;
                    //std::cout << "new_list->val " << new_list->val << std::endl;
                    ans = temp2;
                    temp2 = temp2->next;
                }
            }
            else {
                //std::cout << "new_list->val " << new_list->val << std::endl;
            if(temp1->val <= temp2->val) {
                
                new_list->next = temp1;
                temp1 = temp1->next;
                new_list = new_list->next;
            }
            else {
                new_list->next = temp2;
                temp2 = temp2->next;
                new_list = new_list->next;
            }
        }
            if(!temp1) {
                new_list->next = temp2;
                //new_list = new_list->next;
                return ans;
            }
            
            if(!temp2) {
                new_list->next = temp1;
                //new_list = new_list->next;
                return ans;
            }
            
        }
        
        return ans;
        
    }
};
