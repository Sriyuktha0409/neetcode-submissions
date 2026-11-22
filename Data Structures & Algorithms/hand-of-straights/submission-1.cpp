class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int, int> mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        while(!mp.empty()){
            int grp=1,ele=mp.begin()->first;
            mp[ele]--;
            if(mp[ele] == 0) mp.erase(ele);
            while(grp<groupSize){
                ele++;
                if(mp.find(ele)!=mp.end()){
                    grp++;
                    mp[ele]--;
                    if(mp[ele] == 0) {
                        mp.erase(ele);
                    }
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
