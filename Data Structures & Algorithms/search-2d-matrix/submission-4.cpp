class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        l = l-1;
        if(l < 0) return false;
        int a=0,b=matrix[0].size()-1;
        while(a<=b){
            int mid = (a+b)/2;
            if(matrix[l][mid]==target){
                return true;
            }else if(matrix[l][mid]>target){
                b=mid-1;
            }else{
                a=mid+1;
            }
        }
        return false;
    }
};
