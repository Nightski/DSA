#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col){
    int n = board.size();
    for(int i =0;i<col;i++){
        if(board[row][i] == 1) return false;
    }
    for(int i=row, j = col;i>=0 && j >=0;i--,j--){
        if(board[i][j] == 1) return false;
    }
    for(int i=row, j = col; j >=0 && i < n;j--, i++){
        if(board[i][j] == 1) return false;
    }
    return true;
}


bool util(vector<vector<int>>& board, int col){
    int n = board.size();
    if(col >= n) return true;

    for(int i=0;i<n;i++){
        if(isSafe(board, i, col)){
            board[i][col] = 1;

            if(util(board, col + 1)) return true;

            board[i][col] = 0;
        }
    }
    return false;
}

bool solveNQueen(int n){
    vector<vector<int>> board(n, vector<int>(n,0));

    if(util(board, 0) == false){
        cout<<"No Solution";
        return false;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]){
                cout<<"Q"<<" ";
            }
            else{
                cout<<"-"<<" ";
            }
        }
        cout<<endl;
    }
    return true;
}

int main(){
    solveNQueen(4);
    return 0;
}
