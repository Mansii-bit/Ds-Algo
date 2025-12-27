class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mapy;
        for( char c : s) mapy[c]++;
        for( char c : t) {
            if(mapy.find(c)==mapy.end())return false;
            if(mapy[c]==1)mapy.erase(c);
            else mapy[c]--;
        }
        return mapy.size()==0;
    }
};