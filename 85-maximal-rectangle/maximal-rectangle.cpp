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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans=-1;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> psum(m);
       
        for(int j =0;j<n;j++){
            int sum=0;
            for(int i =0; i<m;i++){
                if(matrix[i][j]=='1') sum++;
                else sum=0;
                psum[i].push_back(sum);
            }
        }
         for(int j =0;j<m;j++){
            int a=largestRectangleArea(psum[j]);
            ans=max(a,ans);
        }

        return ans;
    }
};