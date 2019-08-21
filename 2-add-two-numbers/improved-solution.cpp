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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        auto t1 = l1;
        auto t2 = l2;
        ListNode* ret_head = new ListNode(0); 
        auto ret = ret_head;
            
        int addition = 0;
        int carry = 0;
        std::string num;
        int count = 0;
        while(t1 || t2)
        {
            if(t1 && !t2)
            addition = t1->val + carry;
            if(t2 && !t1)
            addition = t2->val + carry;
            if(t1 && t2)
            addition = t1->val + t2->val + carry;
            
                carry = addition/10;
                addition = addition % 10;
                
                
                std::cout<<"Carry :  "<<carry<<std::endl;
            
            num += std::to_string(addition);
            
            if(t1 == l1 && t2 == l2)
            {
                
                ret->val = addition;
            }
            else
            {
            ListNode* ret_next = new ListNode(addition);    
                
            ret->next = ret_next;
            ret = ret->next;
            }
            
            std::cout<<num<<std::endl;
            if(t1 && t1->next != NULL)
                t1 = t1->next;
            else
                t1 = NULL;
            
            if(t2 && t2->next != NULL)
                t2 = t2->next;
            else
                t2 = NULL;
           
            
            if(!t2 && !t1 )
            {
                if(count == 0)
                {
                    if(addition <= 9)
                    {
                        ListNode* zero = new ListNode(addition);
                        zero->next = NULL;
                        std::cout << "^&^$&*#()"<<carry <<" "<<addition<<std::endl;
                        return zero;
                    }
                    else
                    {
                    std::cout<<"@@@@@"<<std::endl;
                    ListNode* ret_next = new ListNode(addition);
                    ListNode* carr = new ListNode(carry)  ;      
                
                    ret->next = carr;
            
                    ret = ret->next;
                    ret->next = NULL;
                    addition = 0;        
                    return ret_head;
                    }
                    
                }
                ret->next = NULL;
                break;
            }
            ++count;
            
        }
        std::cout<<num<<std::endl;
        return ret_head;
    }
};
