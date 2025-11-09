class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(nums[i]>0)st.push(nums[i]);
            else{
                while(!st.empty() && st.top()>0 && abs(st.top())<abs(nums[i])){
                    st.pop();
                }
                if(!st.empty()){
                    if(st.top()<0)st.push(nums[i]);
                    else if(st.top() > abs(nums[i]))continue;
                    else if(st.top() == abs(nums[i]))st.pop();
                }else st.push(nums[i]);
            }
        }
        int m=st.size();
        vector<int>ans(m);
        while(!st.empty()){
            m--;
            ans[m]=st.top();
            st.pop();
        }
        return ans;
    }
};