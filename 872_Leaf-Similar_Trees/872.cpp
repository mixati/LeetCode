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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a1, a2;
        get_line(root1, a1);
        get_line(root2, a2);
        
        return a1 == a2;
    }
private:
    void get_line(TreeNode* root, vector<int> &arr) {
        
        if(root->left) {
            get_line(root->left, arr);
        }
        if (root->right) {
            get_line(root->right, arr);
        }
        if (!root->left && !root->right)
            arr.push_back(root->val);
    return ;
    }
};
