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
        
        std::vector<int> vec;
        auto temp = head;
        
        while(temp) {
            
            vec.push_back(temp->val);
            temp = temp->next;
        }
        
        std::sort(vec.begin(),vec.end());
        
        temp = head;
        int cnt = 0;
        while(temp) {
            temp->val = vec[cnt];
            cnt++;
            temp = temp->next;
        }
        return head;
    }
};
