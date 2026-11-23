class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int a=1,b=*max_element(piles.begin(),piles.end());
        while(a<=b){
            int m=(a+b)/2;
            long long s=0;
            for(int i=0;i<piles.size();i++){
                double x = (double)piles[i]/m;
                s = s+ ceil(x);
            }
            if(s>h){
                a=m+1;
            }else{
                b=m-1;
            }
        }
        return a;
    }
};
