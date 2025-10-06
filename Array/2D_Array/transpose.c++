#include <iostream>
using namespace std;

void check (int mat[][4],int n , int m){
    int transpose[m][n] ;
    for (int i = 0; i<n ; i++){
        for (int j=0; j<m ; j++){
            transpose[j][i]= mat[i][j] ;
      }
    }
     for (int j=0; j<m ; j++){
         for (int i = 0; i<n; i++){
            cout << transpose[j][i]<< " " ;
         }
         cout << endl ;
}
}
    int main(){
    int arr[4][4] = {
                {10,20,30,40},
                {15,25,35,45},
                {27,29,10,48},
                {32,33,39,50}};
    int n = 4;
    int m = 4 ;

    check(arr,n,m) ;
     

}