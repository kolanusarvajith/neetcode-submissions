class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // each row should have unique
        for(int i = 0 ; i < 9 ; i++){
            unordered_set<char>s;
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] != '.' && s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        // each col should have unique
        for(int j = 0 ; j < 9 ; j++){
            unordered_set<char>s;
            for(int i = 0 ; i < 9 ; i++){
                if(board[i][j] != '.' && s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        // Each box should have unique
        for(int m = 0 ; m < 3 ; m++){
            for(int n = 0 ; n < 3 ; n++){

                unordered_set<char>s;
                for(int i = 3 * m ; i < 3 * m + 3 ; i++){
                    for(int j = 3 * n ; j < 3 * n + 3 ; j++){
                        if(board[i][j] != '.' && s.count(board[i][j])) return false;
                        s.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};
