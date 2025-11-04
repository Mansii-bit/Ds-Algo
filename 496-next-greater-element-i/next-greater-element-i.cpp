class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        vector<int>nge(n);
        map<int,int>mapy;
        for(int i=n-1;i>=0;i--){
            mapy[nums2[i]]=i;
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(st.empty())nge[i]=-1;
            else nge[i]=st.top();
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i : nums1){
            ans.push_back(nge[mapy[i]]);
        }
        return ans;
    }
};