# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        dummy.next = head
        prev = dummy
        curr = head
        while curr and curr.next:
            first = curr
            second = curr.next
            nextPair = second.next
            prev.next = second
            second.next = first
            first.next = nextPair
            prev = first
            curr = nextPair

        return dummy.next
        