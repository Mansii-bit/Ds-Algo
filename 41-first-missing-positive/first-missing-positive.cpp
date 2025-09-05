class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        for(int i : nums) s.insert(i);
        int i=1;
        while(s.count(i)==1){
            i++;
        }
        return i;
    }
};