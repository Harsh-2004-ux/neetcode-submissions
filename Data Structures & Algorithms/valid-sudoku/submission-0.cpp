class Solution {
public:
    bool valid(vector<vector<char>>& board,int row,int col,char ch){
        for(int i=0;i<9;i++){
            if(board[row][i]==ch) return false;
            if(board[i][col]==ch) return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch) return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]!='.'){
                    char ch=board[i][j];
                    board[i][j]='.';
                    if(!valid(board,i,j,ch)){
                        return false;
                    }
                    board[i][j]=ch;
                }
            }
        }
        return true;
    }
};
