class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mapy;
        for(int i : nums){
            if(mapy.find(i)!=mapy.end())return i;
            mapy[i]++;
        }
      
        return 1;
    }
};