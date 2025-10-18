class Solution {
public:
double pow2(double x , long long n){
    if(n==0) return 1.0;
    if(n==1) return x;
    double ans=pow2(x,n/2);
    if(n%2==1){
        ans=ans*ans*x;
    }else ans=ans*ans;
    return ans;
}
    double myPow(double x, int n) {
        double ans=1.0;
        if(n==-2147483648){
            n=-2147483647;
            ans=x;
        }
        long long n1=abs(n);
        ans*=pow2(x,n1);
        if(n>=0) return ans;
        else return 1/ans; 
    }
};