class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(intervals.begin(),intervals.end());
        vector<pair<int,int>> pr;
        for(int i=0;i<queries.size();i++){
            pr.push_back({queries[i],i});
        }
        vector<int> ans(queries.size(), -1);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        sort(pr.begin(),pr.end());
        int j=0;
        for(int i=0;i<queries.size();i++){
            while(j < intervals.size() && intervals[j][0]<=pr[i].first){
                int x= intervals[j][1]-intervals[j][0]+1;
                pq.push({x, intervals[j][1]});
                j++;
            }
            while(!pq.empty() && pq.top().second<pr[i].first){
                pq.pop();
            }
            if(!pq.empty()){
                ans[pr[i].second]=pq.top().first;
            }
        }
        return ans;
    }
};
