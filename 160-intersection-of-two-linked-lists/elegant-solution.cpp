//Shortest and elegant solution:
//https://leetcode.com/problems/intersection-of-two-linked-lists/
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
ListNode *ptrA = headA, *ptrB = headB;
    while (ptrA != ptrB) { 
        ptrA = ptrA ? ptrA->next : headB;
        ptrB = ptrB ? ptrB->next : headA;
    }
    return ptrA;
		
		}
