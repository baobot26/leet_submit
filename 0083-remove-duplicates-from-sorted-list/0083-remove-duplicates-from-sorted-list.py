# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head

        nodupes = set()

        while curr:
            nodupes.add(curr.val)

            if (curr.next):
                if (curr.next.val in nodupes):
                    curr.next = curr.next.next
                else:
                    curr = curr.next
            else:
                curr = curr.next

        return head