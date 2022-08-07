# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        endList = None
        while head:
            aux = head.next
            head.next = endList
            endList = head
            head = aux
        return endList
        