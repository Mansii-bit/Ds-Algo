class Solution {
public:
bool solve(vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(target==nums[mid])return true;
        else if (target <nums[mid])high=mid-1;
        else low=mid+1;
    }
    return false;
}
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        while(solve(nums,i)){
            i++;
        }
        return i;
    }
};