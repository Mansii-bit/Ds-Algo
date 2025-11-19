class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>s(nums.begin(),nums.end());
        while(s.count(original)==1){
            original*=2;
        }
        return original;
    }
};