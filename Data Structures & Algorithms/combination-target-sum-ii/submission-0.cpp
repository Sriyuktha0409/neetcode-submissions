class Solution {
public:
    void f(int i,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp, int s){
        if(s==0){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++){
            if (j>i && nums[j]==nums[j-1]) {
                continue;
            }
            if(nums[j]>s) break;
            temp.push_back(nums[j]);
            f(j+1,nums,ans,temp,s-nums[j]);
            temp.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        f(0,nums,ans,temp,target);
        return ans;
    }
};
