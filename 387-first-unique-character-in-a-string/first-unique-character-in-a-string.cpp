class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mapy;
        for(char c : s){
            mapy[c]++;
        }
        for(int i=0;i<(int)s.size();i++){
            if(mapy[s[i]]==1) return i;
        }
        return -1;
    }
};