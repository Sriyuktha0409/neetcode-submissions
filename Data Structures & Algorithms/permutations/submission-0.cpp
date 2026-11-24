class Solution {
public:
    void f(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp, map<int,int>& mp){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < nums.size(); i++) {
            if(mp[i]==1){
                continue;
            }
            mp[i]=1;
            temp.push_back(nums[i]);
            f(0,nums,ans,temp,mp);
            temp.pop_back();
            mp[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[i]=0;
        }
        f(0,nums,ans,temp,mp);
        return ans;
    }
};
