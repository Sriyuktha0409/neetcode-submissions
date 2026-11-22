class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]] = i;
        }
        vector<int> ans;
        int i=0;
        int maxi=0,start=0;
        while(i<s.size()){
            maxi= max(maxi,mp[s[i]]);
            if(i==maxi){
                ans.push_back(maxi-start+1);
                start=i+1;
            }
            i++;
        }
        return ans;
    }
};
