class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char>mapy;
        set<int>sett;
        string word="";
        string ans="";
        int j=-1;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]==' '){
                j++;
                if(mapy.find(word)!= mapy.end()){
                    if(pattern[j]!=mapy[word])return false;
                }else{
                    if(sett.count(pattern[j])==0)mapy[word]=pattern[j];
                    else return false;
                }
                sett.insert(pattern[j]);
               word="";
               continue;
            }
            word+=s[i];
        }
            j++;
        if(mapy.find(word)!= mapy.end()){
                    if(pattern[j]!=mapy[word])return false;
        }else {
 if(sett.count(pattern[j])==0)mapy[word]=pattern[j];
                    else return false;
        }
        
        // for(char c: pattern) mapy2[c]++;
        // if(mapy.size()!=mapy2.size())return false;
        // int cnt=0;
        // for(auto  x : mapy){
        //     cnt+=x.second;
        // }
        // return n==cnt;

        return j==pattern.size()-1 ? true : false;
    }
};