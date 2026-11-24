class Solution {
public:
    void f(int i,int x,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp, int s){
        if(s-x==0){
            ans.push_back(temp);
            return;
        }
        if(i==nums.size() || x>s){
            return;
        }
        x+=nums[i];
        temp.push_back(nums[i]);
        f(i,x,nums,ans,temp,s);
        x-=nums[i];
        temp.pop_back();
        f(i+1,x,nums,ans,temp,s);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(0,0,nums,ans,temp,target);
        return ans;
    }
};
