# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: ListNode | None) -> ListNode | None:
        odd=head
        if head==None or head.next==None:
            return head
        even=head.next
        last=head.next
        while even!=None and even.next!=None:
            odd.next=odd.next.next
            even.next=even.next.next

            odd=odd.next
            even=even.next
        odd.next=last

        return head