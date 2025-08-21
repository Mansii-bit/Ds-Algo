class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        multiset<int>m;
        for(int i : students) m.insert(i);
        for(int i : sandwiches){
            auto it=m.find(i);
            if(it!=m.end()) m.erase(it);
            else break;
        }
        return m.size();
    }
};