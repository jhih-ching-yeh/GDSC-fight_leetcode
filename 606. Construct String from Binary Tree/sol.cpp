//sol

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
    string tree2str(TreeNode* root) {
        if(root == nullptr) return "";
        const string s = std::to_string(root->val);
        const string l = tree2str(root->left);
        const string r = tree2str(root->right);
        
        if(root->left == nullptr && root->right == nullptr)
            return s;
        if(root->right == nullptr)
            return s + "(" + l + ")";
        return s + "(" + l + ")" + "(" + r + ")";
        
    }
};
