/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preHelper(TreeNode* root, vector<int>& travel) {
        if (root == nullptr) return;
        travel.push_back(root->val);
        preHelper(root->left, travel);
        preHelper(root->right, travel);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preHelper(root, res);
        return res;
    }
};