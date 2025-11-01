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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* p=head;
        ListNode*prev=nullptr;
        set<int>s;
        for(int i : nums) s.insert(i);
        while(p){
            if(s.count(p->val)==1){
                if(!prev) head=p->next;
                else{
                    prev->next=p->next;
                }
            }else prev=p;
            p=p->next;
        }
        return head;
    }
};