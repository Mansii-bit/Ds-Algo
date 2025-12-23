class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mapy;
        int n=nums.size();
        int sum=0,ans=0;
        mapy[0]=1;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            if(mapy.find(sum-k)!=mapy.end())ans+=mapy[sum-k];
            mapy[sum]++;
        }
        return ans;
    }
};