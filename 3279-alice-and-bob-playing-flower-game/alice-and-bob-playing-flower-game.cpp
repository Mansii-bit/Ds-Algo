class Solution {
public:
    long long flowerGame(int n, int m) {
        long long n1=n/2;
        long long n2=(n+1)/2;
        long long m1=m/2;
        long long m2=(m+1)/2;
        return ((n1*m2) + (n2*m1));
    }
};