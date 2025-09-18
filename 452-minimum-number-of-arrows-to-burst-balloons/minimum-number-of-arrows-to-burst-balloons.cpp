class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; // Compare based on the second element (index 1)
    });      
        int i=0;
        int j=1;
        int cnt=0;
        int n=points.size();
        while(i<n){
            int a=points[i][1];
            while(j<n && points[j][0]<=a){
                j++;
            }
            i=j;
            cnt++;
            j++;
        }
        return cnt;
    }
};