#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printboard(vector<vector<string>>&board){
 int n = board.size();
    for (int i =0; i<n; i++){
        for (int j=0; j<n; j++){
             cout << board[i][j];
        }
        cout<<endl;
       
    }
     cout<< "___________"<<endl;
 }
     bool issafe(vector<vector<string>>&board,int row,int col){
        //vertical
        for (int i =0 ; i< row;i++){
            if (board[i][col]=="Q"){
                return false;
            }
        }

        //horizontal
        for (int j=0; j<col;j++){
            if (board[row][j] == "Q"){
                return false;
            }
        }

        //diagonal left
       for (int i=row, j=col; i>=0 && j>=0; i--, j--){
            if (board[i][j]== "Q"){
                return false;
            }
        }

       //diagonal left
       for (int i=row, j=col; i>=0 && j>=0; i--, j++){

        if (board[i][j]=="Q"){
            return false;
        }
       }

       return true ;
     }

void NQueen(vector<vector<string>>&board,int row ){
    int n = board.size();
        if(row == n){
            printboard(board);
            return;
    }
    for (int j =0; j<n; j++){
        if (issafe(board,row,j)){
        board[row][j]= "Q";
        NQueen(board,row+1);
        board[row][j]=".";
        }
    }
}
    

int main (){
    vector<vector<string>> board;
    int n = 4;
    for (int i =0; i<n; i++){
        vector<string>newrow ;
        for(int j=0; j<n; j++){
            newrow.push_back(".");
        }
        board.push_back(newrow);
    }
    NQueen(board, 0);
}