class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s1=0,s2=0;
        for(int i=0;i<gas.size();i++){
            s1+=gas[i];
            s2+=cost[i];
        }
        if(s1<s2) return -1;
        int idx=0,sum=0;
        for(int i=0;i<gas.size();i++){
            sum=sum+gas[i]-cost[i];
            if(sum<0){
                sum=0,
                idx=i+1;
            }
        }
        return idx;
    }
};
