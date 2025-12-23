class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>mapy;
        for(int i : nums){
            int a=i-k;
            int b=i+k;
            if(a>=0 && mapy.find(a)!=mapy.end()) ans+=mapy[a];
            if(b>=0 && mapy.find(b)!=mapy.end()) ans+=mapy[b];
            mapy[i]++;
        }
        return ans;
    }
};