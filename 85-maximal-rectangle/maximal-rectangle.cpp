class Solution {
public:
long long PSEE(vector<int>& arr, int n) {
    int ans=0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                int main=arr[st.top()];
                st.pop();
                int nse=i;
                int pse = st.empty() ? -1 : st.top();
                int res=main*(nse-pse-1);
                ans=max(ans,res);
            }
            st.push(i);
        }
         while(!st.empty()){
            int main=arr[st.top()];
                st.pop();
                int nse=n;
                int pse = st.empty() ? -1 : st.top();
                int res=main*(nse-pse-1);
                ans=max(ans,res);
         }
        return ans;
    }
    int largestRectangleArea(vector<int>arr) {
        int n = arr.size();
        long long res = 0;
        res = PSEE(arr, n);
        return res;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
       int n=matrix.size();
       int m=matrix[0].size();
       int MaxArea=0;
       vector<vector<int>> psum(n, vector<int>(m, 0));
       for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(matrix[i][j]-'0');
            if(matrix[i][j]=='0')sum=0;
            psum[i][j]=sum;
        }
       }
       for(int i=0;i<n;i++){
        MaxArea=max(MaxArea,largestRectangleArea(psum[i]));
       }
       return MaxArea;
    }
};