class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ind=0, maxInd=0;
        for(int i=0;i<nums.size();i++){
            ind=i+nums[i];
            maxInd=max(ind,maxInd);
            if(maxInd>=nums.size()-1){
                return true;
            }
            if(nums[i]==0 && maxInd==i){
                return false;
            }
        }
        return true;
    }
};
