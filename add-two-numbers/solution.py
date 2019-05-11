#https://leetcode.com/problems/add-two-numbers/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        n1 = ""
        n2 = ""
        n3 = 0  
        while(l1.next != None):
            n1 += str(l1.val)
            l1= l1.next
        n1 += str(l1.val)
            
        while(l2.next != None):
            n2 += str(l2.val)
            l2 = l2.next
            
        n2 += str(l2.val)
            
        n1 = n1[::-1]
        print(n1)
        n2 = n2[::-1]
        print(n2)
        n3 = int(n1) + int(n2)
        print(n3)
        
        n3 = str(n3)
        
        n3 = str(n3[::-1])
        
        l4 = ListNode(0)
        l3 = ListNode(n3[0])
        print(n3)
        l4 = l3
        
        for iter1,num1 in enumerate(n3):
            if(iter1 != 0):
                print("second",num1)

                l3.next = ListNode(n3[iter1])
                l3 =  l3.next  
                #l3 = ListNode(n3[iter1+1])
        return(l4)

