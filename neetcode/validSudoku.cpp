class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    //declare hash sets and hash maps
    unordered_map< int , unordered_set<char>> rows, cols;
    /*unordered_*/map< pair<int,int> , unordered_set<char>> square;

    for(int r= 0 ; r < 9 ; ++r){
        for(int c = 0 ; c < 9 ; ++c){
            if(board[r][c] == '.')
                continue ;
            pair<int,int> skey = {r/3 , c/3}; // square keys, ei: {0,0} for r=2,c=0

            if(rows[r].count(board[r][c]) ||
               cols[c].count(board[r][c]) ||
               square[skey].count(board[r][c]) )
               return false;

            rows[r].insert(board[r][c]);
            cols[c].insert(board[r][c]);
            square[skey].insert(board[r][c]);
        }
    }
    return true; // وا العالمية معا هدشي ههههه 
    //  المهم نسا عليك هدشي دبا شوف لينا مالو 
    }
};
