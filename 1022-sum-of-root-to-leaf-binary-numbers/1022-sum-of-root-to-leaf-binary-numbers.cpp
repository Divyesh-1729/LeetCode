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
    void dfs(TreeNode* root,int number,vector<int>& numbers)
    {
        if(root==NULL)
        {
            return;
        }
        number = number*2 + root->val;  // This is binray conversion
        if(root->left ==NULL&&root->right ==   NULL)
        {
            numbers.push_back(number);
            return;
        }
        
        dfs(root->left, number,numbers);
        dfs(root->right,  number,numbers);
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int>numbers;
        dfs(root,0,numbers);
        int sum = 0;
        for(int i : numbers)
        {
            sum= sum  + i;
        }
        return sum;
    }
};