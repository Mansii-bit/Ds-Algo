class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        map<int,int>mapy;
        vector<vector<int>>ans(2);
        for(int i=0;i<n;i++){
            int win =matches[i][0];
            int loss =matches[i][1];
            if(mapy[win]>=0)mapy[win]++;
            if(mapy.find(loss)!=mapy.end()){
               if(mapy[loss]>0) mapy[loss]=-1;
               else mapy[loss]--;
            }
            else mapy[loss]--;
            
        }
        vector<int>one;
        vector<int>zero;
        for(auto x: mapy){
            cout<<x.first<<" : "<<x.second<<"\n";
            if(x.second>0)zero.push_back(x.first);
            if(x.second==-1)one.push_back(x.first);
        }
        ans[0]=zero;
        ans[1]=one;
        return ans;
    }
};