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
    bool isValidBST(TreeNode* root) {
        return (checker(root, LONG_MIN, LONG_MAX));
    }

    bool checker(TreeNode* root, long min, long max) {
        if (root == NULL)
            return true;
        else if (root->val >= max || root->val <= min)
            return false;
        else 
            return (checker(root->left, min, root->val) && checker(root->right, root->val, max));
    }
};