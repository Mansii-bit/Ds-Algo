class Solution {
public:
vector<int> pge(int n , vector<int>arr){
    vector<int>a(n);
    stack<int>st;
    for(int i =0;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            st.pop();
        }
        a[i]=st.empty() ? -1 : st.top();
        st.push(i);
    }
    return a;
}
vector<int> nge(int n , vector<int>arr){
    vector<int>a(n);
    stack<int>st;
    for(int i =n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        a[i]=st.empty() ? n : st.top();
        st.push(i);
    }
    return a;
}

long long sumSubarrayMax(vector<int>& arr) {
        int n=arr.size();
        long long total=0;
        vector<int>ng=nge(n,arr);
        vector<int>pg=pge(n,arr);
        for(int i=0;i<n;i++){
            long long l=i-pg[i];
            long long r=ng[i]-i;
            long long sub=(l*r)*arr[i];
            total+=sub;
        }
        return total;
}



//smaller
vector<int> pse(int n , vector<int>arr){
    vector<int>a(n);
    stack<int>st;
    for(int i =0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        a[i]=st.empty() ? -1 : st.top();
        st.push(i);
    }
    return a;
}
vector<int> nse(int n , vector<int>arr){
    vector<int>a(n);
    stack<int>st;
    for(int i =n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        a[i]=st.empty() ? n : st.top();
        st.push(i);
    }
    return a;
}

long long sumSubarrayMin(vector<int>& arr) {
        int n=arr.size();
        long long total=0;
        vector<int>ns=nse(n,arr);
        vector<int>ps=pse(n,arr);
        for(int i=0;i<n;i++){
            long long l=i-ps[i];
            long long r=ns[i]-i;
            long long sub=(l*r)*arr[i];
            total+=sub;
        }
        return total;
}
    long long subArrayRanges(vector<int>& nums) {
        return (sumSubarrayMax(nums) - sumSubarrayMin(nums));
    }
};
