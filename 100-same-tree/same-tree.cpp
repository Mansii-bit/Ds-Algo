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
void solve(TreeNode* root, vector<int>&v){
if(!root) {
    v.push_back(1e9);
    return;
}
solve(root->left,v);
solve(root->right,v);
v.push_back(root->val);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1;
        vector<int>v2;
        solve(p,v1);
        solve(q,v2);
        // for(int i =0 ;i<v1.size();i++) cout<<v1[i]<<" ";
        // cout<<endl;
        // for(int i =0 ;i<v2.size();i++) cout<<v2[i]<<" ";
        if(v1.size()!= v2.size())return false;
        for(int i =0 ; i<v1.size() ; i++){
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};