class Solution {
public:
vector<int> nse (int n , vector<int> arr){
    vector<int>a(n);
    stack<int>st;
    for(int i = n-1;i>=0 ;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        a[i]=st.empty()?n:st.top();
        st.push(i);
    }
    return a;
}
vector<int> pse (int n , vector<int> arr){
    vector<int>a(n);
    stack<int>st;
    for(int i = 0 ; i<n ;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        a[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return a;
}
    int largestRectangleArea(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        vector<int>ps=pse(n,nums);
        vector<int>ns=nse(n,nums);
        for(int i=0;i<n;i++){
            int a=(ns[i]-ps[i]-1)*nums[i];
            ans=max(a,ans);
        }
        return ans;
    }
};