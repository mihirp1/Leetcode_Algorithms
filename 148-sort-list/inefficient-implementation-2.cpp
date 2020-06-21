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
    ListNode* sortList(ListNode* head) {
        
        ListNode* temp = head;
        
        if(!temp) {
            return NULL;
        }
        
        if(!temp->next) {
            return head;
        }
        
        while(temp) {
            //std::cout <<temp->val<<std::endl;
            
            if (temp->next && (temp->val > temp->next->val)) {        
                //auto prev = temp;
                //std::swap(temp->val, temp->next->val);
                temp = head;
            }

            else {
                temp = temp->next;
            }
            
        }
        
      return head;
    }
};
