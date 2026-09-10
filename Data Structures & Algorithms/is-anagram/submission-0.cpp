class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            mpp[t[j]]--;
            if(mpp[t[j]]==0){
                mpp.erase(t[j]);
            }
        }
        if(mpp.empty()){
            return true;
        }
        return false;
    }
};
