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
int solve(TreeNode* root){
    if(!root->left && !root->right)return 1;
    int left=1e9;
    int right=1e9;
    if(root->left) left=solve(root->left);
    if(root->right) right=solve(root->right);
    return min(left,right)+1;
}
    int minDepth(TreeNode* root) {
        // min(left,right)+1
        if(!root) return 0;
        int min=solve(root);
        return min;
    }
};