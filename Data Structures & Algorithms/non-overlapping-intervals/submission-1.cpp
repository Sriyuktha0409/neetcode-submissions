class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>& a, vector<int>& b){
            return a[1]<b[1];
        });
        int cnt=0,i=0,end=INT_MIN;
        while(i<intervals.size()){
            if(intervals[i][0]>=end){
                cnt++;
                end = intervals[i][1];
            }
            i++;
        }
        return intervals.size()-cnt;
    }
};
