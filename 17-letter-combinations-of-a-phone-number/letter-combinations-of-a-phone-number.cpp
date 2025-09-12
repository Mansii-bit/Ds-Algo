class Solution {
public:
    void solve(string digits , int n, int i , string temp, map<char,string>m , vector<string>&ans){
        if(i>=n){
            if(temp.size()>0)ans.push_back(temp);
            return;
        }
        string a= m[digits[i]];
        for(int ind=0; ind<a.size() ; ind++){
            solve(digits,n,i+1,temp+a[ind],m,ans);
        }

    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        map<char,string> m;
            m['2']="abc";
            m['3']="def";
            m['4']="ghi";
            m['5']="jkl";
            m['6']="mno";
            m['7']="pqrs";
            m['8']="tuv";
            m['9']="wxyz";    
        vector<string>ans;
        string temp="";
        solve(digits,n,0,temp,m,ans);
        return ans;
    }
};