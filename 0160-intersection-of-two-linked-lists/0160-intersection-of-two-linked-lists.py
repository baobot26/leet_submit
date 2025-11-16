# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        i = headA
        j = headB
        s1 = dict()
        s2 = dict()
        while i:
            s1[i] = i.val
            i = i.next
        while j:
            s2[j] = j.val
            j = j.next
        for k in s1:
            if k in s2: return k
        return None