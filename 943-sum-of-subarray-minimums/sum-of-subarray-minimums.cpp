class Solution {
public:
vector<int> nse(int n , vector<int>arr){
    vector<int>a(n);
     stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        a[i]=st.empty()?n:st.top();
        st.push(i);
    }
    return a;
}
vector<int> pse(int n , vector<int>arr){
    vector<int>a(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        a[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return a;
}
    int sumSubarrayMins(vector<int>& arr) {
        long long mod=pow(10,9)+7;
        int n=arr.size();
        long long total=0;
        vector<int>ns=nse(n,arr);
        vector<int>ps=pse(n,arr);
        for(int i=0;i<n;i++){
            long long l=i-ps[i];
            long long r=ns[i]-i;
            long long sub=(((l*r)%mod)*arr[i])%mod;
            total=(total+sub)%mod;
        }
        return total;
    }
};