class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        int ans=-1;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                int nse=i;
                int h =nums[st.top()];
                st.pop();
                int pse= st.empty()? -1 : st.top();
                ans=max(ans,((nse-pse-1)*h));
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse=n;
            int h= nums[st.top()];
            st.pop();
            int pse=st.empty()?-1:st.top();
            ans=max(ans,((nse-pse-1)*h));
        }
        return ans;
    }
};