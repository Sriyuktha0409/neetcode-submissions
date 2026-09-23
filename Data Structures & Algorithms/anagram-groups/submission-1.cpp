class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(auto s: strs){
            int freq[26]={0};
            for(auto x:s){
                freq[x-'a']++;
            }
            string str="";
            for(int i=0;i<26;i++){
                str+=to_string(freq[i])+"#";
            }
            mp[str].push_back(s);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
