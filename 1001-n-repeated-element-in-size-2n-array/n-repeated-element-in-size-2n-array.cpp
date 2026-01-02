class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mapy;
        for(int i : nums)mapy[i]++;
        for(auto x : mapy){
            if(x.second==n/2)return x.first;
        }
        return 1;
    }
};