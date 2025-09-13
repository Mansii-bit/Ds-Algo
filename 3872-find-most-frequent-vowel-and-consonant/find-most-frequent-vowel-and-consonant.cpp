class Solution {
public:
    int maxFreqSum(string s) {
        int cns=0;
        int vow=0;
        map<char,int>m;
        for( char c : s) m[c]++;
        for(auto x : m){
            char y= x.first;
            if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u' )vow=max(vow,x.second);
            else cns=max(cns,x.second);
        }
        return cns+vow;
    }
};