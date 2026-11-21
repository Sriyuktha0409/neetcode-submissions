class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i=0;
        if(intervals.empty()){
            return {newInterval};
        }
        while(i<intervals.size() && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        if(i==intervals.size()){
            ans.push_back(newInterval);
            return ans;
        }
        if(intervals[i][1]>newInterval[0] && intervals[i][0]>newInterval[0]){
            ans.push_back(newInterval);
        }
        else if(!ans.empty() && intervals[i][0]<newInterval[0] && ans.back()[1]>newInterval[0]){
            ans.back()[1]=max(ans.back()[1],newInterval[1]);
        }else{
            int start=min(intervals[i][0],newInterval[0]);
            int end = max(intervals[i][1],newInterval[1]);
            ans.push_back({start,end});
            i++;
        }
        while(i<intervals.size()){
            if(intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
            i++;
        }
        return ans;
    }
};
