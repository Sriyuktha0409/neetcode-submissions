class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> vec;
        int n=position.size();
        for (int i = 0; i < n; i++) {
            double time= (double)(target-position[i])/speed[i];
            vec.push_back({position[i],time});
        }
        stack<double> st;
        sort(vec.begin(), vec.end());
        for (int i = n-1; i >= 0; i--) {
            if(!st.empty() && st.top()>=vec[i].second){
                continue;
            }else{
                st.push(vec[i].second);
            }
        }
        return st.size();
    }
};
