class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0) return {0};
        vector<int> ar(n+1,-1);
        ar[0]=0;
        for(int x=1;x<=n;x++){
            int cnt=0;
            int i=x;
            while(i>0){
                if(ar[i]!=-1){
                    cnt+=ar[i];
                    i=0;
                }else{
                    if(i%2==1){
                        cnt++;
                    }
                    i=i/2;
                }
            }
            ar[x]=cnt;
        }
        return ar;
    }
};
