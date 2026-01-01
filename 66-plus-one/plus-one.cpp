class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int n=digits.size()-1;
        int c=1;
        while(n>=0){
            v.insert(v.begin(),(digits[n]+c)%10);
            c=(digits[n]+c)/10;
            n--;
        }
        if(c!=0) v.insert(v.begin(),c);
        return v;
    }
};