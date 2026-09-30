class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int maxarea=0, area=0;
        while(l<r){
            area= (r-l)*min(heights[l],heights[r]);
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
            maxarea= max(area,maxarea);
        }
        return maxarea;
    }
};
