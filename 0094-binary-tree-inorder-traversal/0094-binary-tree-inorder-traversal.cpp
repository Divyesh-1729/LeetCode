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
    void store(TreeNode* root,vector<int>&ans )
    {
        if(root==NULL)
        {
            return;

        }
        store(root->left,ans);
        ans.push_back(root->val);
        store(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        store(root, ans);
        return ans;

    }
};