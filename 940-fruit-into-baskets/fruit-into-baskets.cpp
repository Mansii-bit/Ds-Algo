class Solution {
public:
    int totalFruit(vector<int>& nums) {
        map<int,int> mapy;
        int n=nums.size();
        int l=0,r=0;
        while(r<n){
            mapy[nums[r]]++;
            if(mapy.size()>2){
                if(mapy[nums[l]]==1) mapy.erase(nums[l]);
                else mapy[nums[l]]--;
                l++;
            }
            r++;
        }
        int ans=0;
        for(auto x : mapy) ans+=x.second;
        return ans;
    }
};