/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public void preHelper(Node root, List<Integer> travel) {
        if (root == null) return;
        travel.add(root.val);
        for (int i = 0; i < root.children.size(); ++i) {
            preHelper(root.children.get(i), travel);
        }
    }
    public List<Integer> preorder(Node root) {
        List<Integer> res = new LinkedList<>();
        preHelper(root, res);
        return res;
    }
}