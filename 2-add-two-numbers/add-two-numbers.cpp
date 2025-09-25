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
string solve(ListNode* l){
    string s="";
    while(l){
        s+=to_string(l->val);
        l=l->next;
    }
    return s;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string num1=solve(l1);
        string num2=solve(l2);
        // long long a= stoll(num1) + stoll(num2);
        ListNode* ans= new ListNode(0);
        ListNode* p=ans;
        if(num1.size()<=0 || num2.size()<=0) return ans;
        if(num1.size()>num2.size()){
            while(num1.size()-num2.size()!=0){
                num2+="0";
            }
        }
        if(num1.size()<num2.size()){
            while(num1.size()-num2.size()!=0){
                num1+="0";
            }
        }
        int c=0;
        for(int i=0;i<(int)num1.size();i++){
            int a=(num1[i]-'0')+ (num2[i]-'0') + c;
            ans->next=new ListNode(a%10);
            c=a/10;
            ans=ans->next;
        }
        if(c>0){
            ans->next=new ListNode(c);
        }
        return p->next;
    }
};