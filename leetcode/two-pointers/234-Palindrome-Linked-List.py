# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode | None) -> bool:
        def reverseLinkedList(head):
                prev = None
                curr = head

                while curr:
                    nextNode = curr.next
                    curr.next = prev
                    prev = curr
                    curr = nextNode

                return prev
        
        slow=head
        fast=head
        while fast.next is not None and fast.next.next is not None:
            slow=slow.next
            fast=fast.next.next
        newNode=reverseLinkedList(slow.next)
        first=head
        second=newNode
        while second!=None:
            if first.val!=second.val:
                reverseLinkedList(newNode)
                return False
            first=first.next
            second=second.next
        reverseLinkedList(newNode)
        return True
            