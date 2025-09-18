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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        if(!root)return v;
        TreeNode* node=root;
        while(true){
            if(node){
                st.push(node);
                v.push_back(node->val);
                node=node->left;
            }
            else{
                if(st.empty())break;
                node=st.top()->right;
                st.pop();
            }
        }
        return v;
    }
};