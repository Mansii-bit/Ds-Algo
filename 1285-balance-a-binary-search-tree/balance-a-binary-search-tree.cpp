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
TreeNode* solve(int low, int high, vector<int>&v,int n){
    if(low>high)return nullptr;
    int mid=low+(high-low)/2;
    TreeNode* node = new TreeNode(v[mid]);
        node->left=solve(low,mid-1,v,n);
        node->right=solve(mid+1,high,v,n);
        return node;
}
void inOrder(TreeNode *root, vector<int>&v){
    if(!root)return;
    inOrder(root->left,v);
    v.push_back(root->val);
    inOrder(root->right,v);
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inOrder(root, v);
        int n=v.size();
        int mid=(0+(n-1))/2;
        TreeNode * ans = new TreeNode(v[mid]);
        ans->left=solve(0,mid-1,v,n);
        ans->right=solve(mid+1,n-1,v,n);
        return ans;
    }
};