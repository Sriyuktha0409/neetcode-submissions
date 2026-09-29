class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int cnt=0, maxcnt=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)!=s.end()){
                continue;
            }else{
                int x=nums[i];
                cnt=1;
                while(s.find(x+1)!=s.end()){
                    cnt++;
                    x++;
                }
            }
            maxcnt = max(cnt,maxcnt);
        }
        return maxcnt;
    }
};
