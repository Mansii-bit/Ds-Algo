class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int psum=0;
        int cnt=0;
        unordered_map<int,int>mapy;
        mapy[0]=1;
        for(int i : nums){
            psum+=i;
            if(mapy.find(psum-goal) != mapy.end())cnt+=mapy[psum-goal];
            mapy[psum]++;
        }
        return cnt;
    }
};