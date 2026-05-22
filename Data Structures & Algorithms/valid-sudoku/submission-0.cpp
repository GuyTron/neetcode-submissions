class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9,0)), col(9, vector<int>(9,0)), block(9, vector<int>(9,0));
        for(int i=0; i<board.size(); i++){
            for(int j=0; j < board[0].size(); j++){
                if(board[i][j] == '.') continue;
                if(row[i][(board[i][j] - '0')-1] == 1 ) return(false);
                else row[i][(board[i][j] - '0')-1] = 1;

                if(col[j][(board[i][j] - '0')-1] == 1 ) return(false);
                else col[j][(board[i][j] - '0')-1] = 1;

                int blk = ((i/3) * 3) + (j/3);
                if( block[blk][(board[i][j] - '0')-1] == 1 ) return(false); 
                else block[blk][(board[i][j] - '0') - 1] = 1;
            }
        }
        return(true);
    }
};
