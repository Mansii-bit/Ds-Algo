/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode*p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        ListNode* t=head;
        int n=v.size();
        int i=0;
        sort(v.begin(),v.end());
        while(t){
            t->val=v[i];
            t=t->next;
            i++;
        }
        return head;
    }
};