class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> mapy1;
        unordered_map<char,int> mapy2;
        for(char c : words[0]) mapy1[c]++;
        int n=words.size();
        for(int i =1;i<n;i++){
            for(char c : words[i])mapy2[c]++;
            for(auto x : mapy1){
                char c=x.first;
                mapy1[x.first]= min(mapy2[c],mapy1[c]);
            }
            mapy2.clear();
        }
        vector<string> ans;
        string s="";
        for( auto  x : mapy1){
            int c= x.second;
            s+=x.first;
            while(c--){
                ans.push_back(s);
            }
            s="";
        }
        return ans;

    }
};