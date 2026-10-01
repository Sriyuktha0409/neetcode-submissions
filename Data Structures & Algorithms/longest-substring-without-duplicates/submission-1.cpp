class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,cnt=0,maxcnt=0;
        map<char,int> mp;
        for(int r=0;r<s.size();r++){
            if(mp.find(s[r])!=mp.end()){
                l=max(l,mp[s[r]]+1);
            }
            cnt=r-l+1;
            mp[s[r]]=r;
            maxcnt=max(cnt,maxcnt);
        }
        return maxcnt;
    }
};
