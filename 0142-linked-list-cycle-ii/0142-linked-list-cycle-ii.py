# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None: return None
        slow = head
        fast = head.next
        cycle = False
        while fast and fast.next:
            if slow == fast: 
                cycle = True
                break
            slow = slow.next
            fast = fast.next.next
        if not cycle: return None
        slow = head
        sets = dict()
        while slow:
            if slow in sets : return slow
            else: sets[slow] = slow.val
            slow = slow.next
        return None