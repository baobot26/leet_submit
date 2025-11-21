# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderHelper(self, root: Optional[TreeNode], traverse: List[int]):
        if root is None: return
        self.inorderHelper(root.left, traverse)
        traverse.append(root.val)
        self.inorderHelper(root.right, traverse)
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        self.inorderHelper(root, res)
        return res