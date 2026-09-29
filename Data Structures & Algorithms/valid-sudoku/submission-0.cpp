class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            int hash[9]={0};
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                if(hash[board[i][j]-'1']==1){
                    return false;
                }else{
                    hash[board[i][j]-'1']=1;
                }
            }
        }
        for(int i=0;i<9;i++){
            int hash[9]={0};
            for(int j=0;j<9;j++){
                if(board[j][i] == '.') continue;
                if(hash[board[j][i]-'1']==1){
                    return false;
                }else{
                    hash[board[j][i]-'1']=1;
                }
            }
        }
        for(int r=0;r<9;r+=3){
            for(int c=0;c<9;c+=3){
                int hash[9]={0};
                for(int i=r;i<r+3;i++){
                    for(int j=c;j<c+3;j++){
                        if(board[i][j] == '.') continue;
                        if(hash[board[i][j]-'1']==1){
                            return false;
                        }else{
                            hash[board[i][j]-'1']=1;
                        }
                    }
                }
            }
        }
        return true;
    }
};
