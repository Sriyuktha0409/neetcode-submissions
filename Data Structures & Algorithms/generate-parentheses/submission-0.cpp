class Solution {
public:
    void f(int i,int j, int n, vector<string>& ans, string temp){
        if(temp.size()==2*n){
            ans.push_back(temp);
            return;
        }
        if(i<n){
            f(i+1,j,n,ans,temp+'(');
        }
        if(i>j){
            f(i,j+1,n,ans,temp+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="(";
        f(1,0,n,ans,temp);
        return ans;
    }
};
