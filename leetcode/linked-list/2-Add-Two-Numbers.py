# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:

        temp1=l1
        temp2=l2
        dummy=ListNode(-1)
        current=dummy
        carry=0
        while (temp1!=None or temp2!=None):
            sum=carry
            if temp1:
                sum=sum+temp1.val
            if temp2:
                sum=sum+temp2.val
            new=ListNode(sum%10)
            carry=(sum//10)
            current.next=new
            current=current.next

            if temp1:
                temp1=temp1.next
            if temp2:
                temp2=temp2.next
        
        if carry:
            new=ListNode(carry)
            current.next=new
        
        return dummy.next