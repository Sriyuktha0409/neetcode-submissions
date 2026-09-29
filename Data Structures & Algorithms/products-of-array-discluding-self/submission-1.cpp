class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        int pp=1, ps=1;
        for(int i=1;i<n;i++){
            pp= pp* nums[i-1];
            prefix[i]=pp;
        }
        for(int i=n-2;i>=0;i--){
            ps= ps* nums[i+1];
            suffix[i]=ps*prefix[i];
        }
        suffix[n-1] = suffix[n-1]*prefix[n-1];
        return suffix;
    }
};
