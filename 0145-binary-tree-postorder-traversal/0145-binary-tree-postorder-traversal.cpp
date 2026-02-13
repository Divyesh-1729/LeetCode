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
        void storage(TreeNode* root,vector<int>& ans)
        {
            if(root==NULL)
            {
                return;
            }
            storage(root->left, ans);
            storage(root->right, ans);
            ans.push_back(root->val);

        }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        storage(root,ans);
        return ans;
        
    }
};