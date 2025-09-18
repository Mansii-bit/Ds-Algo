class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)return n-1;
        if(n==4) return 4;
        int prod=1;
        while(n>4){
            prod*=3;
            n=n-3;
        }
        prod*=n;
        return prod;
    }
};