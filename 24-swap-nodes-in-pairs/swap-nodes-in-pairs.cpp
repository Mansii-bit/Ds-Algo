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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* n1=head;
        ListNode* n2= head->next;
        ListNode* pre= n1;
        head=n2;
        while(n1 && n2){
            n1->next= n2->next;
            n2->next= n1;
            n1= n1->next;
            n2=n1==nullptr ? nullptr: n1->next;
            pre->next=n2==nullptr? pre->next:n2;
            pre=n1;
        }
        return head;
    }
};