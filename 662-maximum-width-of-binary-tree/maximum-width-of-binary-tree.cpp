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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0LL;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0LL});
        while(!q.empty()){
            int first=q.front().second;
            int last=first;
            int size=q.size();
            while(size--){
                auto x=q.front();
                last=x.second;
                q.pop();
                if(x.first->left) q.push({x.first->left,1LL+2LL*(x.second-first)});
                if(x.first->right) q.push({x.first->right,2LL+2LL*(x.second-first)});
            }
            ans=max(ans,(last-first+1LL));
        }
        return ans;
    }
};