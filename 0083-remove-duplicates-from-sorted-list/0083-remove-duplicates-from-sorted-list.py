# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        duplicate = set()
        while curr:
            duplicate.add(curr.val)
            if curr.next:
                if curr.next.val in duplicate:
                    curr.next = curr.next.next
                else: curr = curr.next
            else: curr = curr.next
        return head