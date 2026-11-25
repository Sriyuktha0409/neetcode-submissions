class Solution {
public:
    bool dfs(int i,int j,int idx,vector<vector<char>>& board, vector<vector<int>>& mat, string word){
        if(idx==word.size()){
            return true;
        }
        int m=board.size();
        int n= board[0].size();

        if(i<0 || i>=m || j<0 || j>=n || word[idx]!=board[i][j] || mat[i][j]==1){
            return false;
        }
        mat[i][j]=1;
        bool found = dfs(i+1,j,idx+1, board,mat,word)||
                        dfs(i,j+1,idx+1, board,mat,word)||
                        dfs(i-1,j,idx+1, board,mat,word)||
                        dfs(i,j-1,idx+1, board,mat,word);
        mat[i][j]=0;
        return found;

    }
    bool exist(vector<vector<char>>& board, string word) {
        string s;
        int m=board.size();
        int n= board[0].size();
        vector<vector<int>> mat(m, vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]==board[i][j]){
                    if(dfs(i,j,0,board,mat,word)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};
