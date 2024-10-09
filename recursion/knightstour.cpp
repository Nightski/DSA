#include<iostream>
#include<vector>
using namespace std;
const int N = 8;
int moveX[] = {2,1,-1,-2,-2,-1,1,2};
int moveY[] = {1,2,2,1,-1,-2,-2,-1};

bool valid(int x, int y, vector<vector<int>>& board){
    return(x>=0 && x<N && y>=0 && y<N && board[x][y] == -1);
}


bool solveknight(int x, int y, int count, vector<vector<int>>& board){
    if(count == N*N){
        return true;
    }
    for(int i=0;i<8;i++){
        int nextX = x + moveX[i];
        int nextY = y + moveY[i];

        if(valid(nextX, nextY,board)){
            board[nextX][nextY] = count;
            if(solveknight(nextX, nextY,count + 1, board)){
                return true;
            }
            board[nextX][nextY] = -1;
        }   
    }
    return false;
}


bool ktour(){
    vector<vector<int>> board(N, vector<int>(N, -1));
    board[0][0] = 0;
    if(!solveknight(0,0,1,board)){
        cout<<"Solution does not exist";
        return false;
    }
    else{
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
}

int main(){
    ktour();
    return 0;
}
