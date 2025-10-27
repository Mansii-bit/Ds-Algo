class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total=0;
        int prev=0;
        for( string s : bank){
            s.erase(remove(s.begin(),s.end(),'0'),s.end());
            int curr=s.size();
            if(curr>0) {
                total+=(prev*curr);
                prev=curr;
            }
        }
        return total;
    }
};