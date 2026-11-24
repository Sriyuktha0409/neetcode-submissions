class Solution {
public:
    void f(int i,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp, int s){
        if(s==0){
            ans.push_back(temp);
            return;
        }
        if(i==nums.size() || s<0){
            return;
        }
        temp.push_back(nums[i]);
        f(i,nums,ans,temp,s-nums[i]);
        temp.pop_back();
        f(i+1,nums,ans,temp,s);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(0,nums,ans,temp,target);
        return ans;
    }
};
