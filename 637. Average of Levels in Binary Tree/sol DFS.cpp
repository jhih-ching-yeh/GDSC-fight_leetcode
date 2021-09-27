//sol DFS

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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == nullptr) return {};
        vector<pair<long long, int>> sum_count;
        vector<double> ans;
        
        preorder(root, 0, sum_count);
        
        for(const auto& p : sum_count) {
            ans.push_back(static_cast<double>(p.first) / p.second);
        }
        return ans;
    }
    
private:
    void preorder(TreeNode* root, int depth, vector<pair<long long, int>>& sum_count) {
        if(root == nullptr) return;
        if(depth >= sum_count.size()) sum_count.push_back({0, 0});
        
        sum_count[depth].first += root->val;
        sum_count[depth].second ++;
        preorder(root->left, depth+1, sum_count);
        preorder(root->right, depth+1, sum_count);
    }
    
};



