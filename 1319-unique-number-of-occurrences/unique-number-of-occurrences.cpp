class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mapy;
        for(int i : arr){
            mapy[i]++;
        }
        set<int>s;
        for(auto x : mapy){
            if(s.count(x.second)==1) return false;
            s.insert(x.second);
        }
        return true;
    }
};