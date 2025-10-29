class Solution {
public:
int toDecimal(string s){
    int num=0;
    int n=s.size();
    // if(n==1)return 1;
    // int a=1;
    for(int i=0;i<n;i++){
        num+=pow(2,i);
    }
    return num;
}
string toBinary(int n){
    string num="";
    while(n!=0){
        num=to_string(n%2)+num;
        n=n/2;
    }
    return num;
}
    int smallestNumber(int n) {
        string s=toBinary(n);
        cout<<s<<"\n";
        replace(s.begin(),s.end(),'0','1');
        cout<<s;
        int ans=toDecimal(s);
        return ans;
    }
};