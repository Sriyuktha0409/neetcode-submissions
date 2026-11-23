class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int pse,area=0,maxar=0;
        stack<int> st;
        for (int i = 0; i < heights.size(); i++) {
            while(!st.empty() && heights[st.top()]>heights[i]){
                int x=st.top();
                st.pop();
                pse= st.empty()? -1: st.top();
                area= heights[x]*(i-pse-1);
                maxar= max(area,maxar);
            }
            st.push(i);
        }
         while(!st.empty()) {
            int x = st.top();
            st.pop();

            pse = st.empty() ? -1 : st.top();

            area = heights[x] * (heights.size() - pse - 1);
            maxar = max(area, maxar);
        }
        return maxar;
    }
};
