class Solution {
public:
    string convert(string s, int k) {
        int n=s.size();
        vector<int> v;
        for(int i=0;i<k;i++) v.push_back(i);
        for(int i=k-2;i>0;i--)v.push_back(i);
        int vsize=v.size();
        vector<string> vv(k,"");
        int j=0;
        for(int i=0;i<n;i++){
            vv[v[j]]+=s[i];
            j=(j+1)%vsize;
        }
        string ans="";
        for( string i : vv) ans+=i;
        return ans;
    }
};