class Solution {
public:
    bool palin(string s, int l,int r){
        while(l<=r){
            if(s[l++]!=s[r--])
                return false;
        }
        return true;
    }
    void f(int idx,vector<vector<string>>& ans, string s, vector<string>& temp){
        if(idx==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(palin(s,idx,i)){
                temp.push_back(s.substr(idx, i-idx+1));
                f(i+1,ans,s,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        f(0,ans,s,temp);
        return ans;
    }
};
