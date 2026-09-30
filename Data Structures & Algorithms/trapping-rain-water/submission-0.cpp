class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int s=0, lMax=0, rMax=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]<lMax){
                    s+=(lMax-height[l]);
                }else{
                    lMax=height[l];
                }
                l++;
            }else{
                if(height[r]<rMax){
                    s+=(rMax-height[r]);
                }else{
                    rMax=height[r];
                }
                r--;
            }
        }
        return s;
    }
};
