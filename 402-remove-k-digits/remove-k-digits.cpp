class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        // stack<char>st;
        if(k==n)return "0";
        string ans="";
        for(int i=0;i<n;i++){
           while( !ans.empty() && (ans.back()-'0') > (num[i]-'0') && k!=0){
            ans.pop_back();
            k--;
           }
           if(ans.empty() && num[i]=='0')continue;
           else ans+=num[i];
        }
      while(!ans.empty() && k!=0) {
        ans.pop_back();
        k--;
      }
        return ans.empty()?"0":ans;
    }
};