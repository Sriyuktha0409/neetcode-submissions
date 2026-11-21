/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size()==0) return 0;
        vector<int> st,en;
        for(int i=0;i<intervals.size();i++){
            st.push_back(intervals[i].start);
            en.push_back(intervals[i].end);
        }
        sort(st.begin(),st.end());
        sort(en.begin(),en.end());
        int i=0,j=0,cnt=0,maxcnt=0;
        while(i<intervals.size()){
            if(st[i]<en[j]){
                cnt++;
                i++;
            }else{
                cnt--;
                j++;
            }
            maxcnt=max(cnt,maxcnt);
        }
        return maxcnt;
    }
};
