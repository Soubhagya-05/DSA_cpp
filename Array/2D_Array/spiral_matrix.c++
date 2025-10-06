#include <iostream>
using namespace std;
void spiral_matrix(int mat[3][3],int n,int m){
    int srow = 0,erow = n-1 ;
    int scol = 0,ecol = m-1 ;

 while (srow <= erow && scol <= ecol ){
 //top border
    for (int i = scol; i<=ecol ; i++){
        cout << mat[srow][i] ;
 }
 //right border
    for (int j = srow +1; j<= erow ; j++){
        cout << mat[j][ecol];
 }
 //bottom border
    for (int k = ecol-1 ; k>= scol; k--){
        cout << mat[erow][k];
 }
 //left border 
    for (int l = erow-1 ; l>= srow +1 ; l--){
        cout <<mat[l][scol];
 }
 scol++;
 ecol--;
 srow++;
 erow--;
    }

}
int main (){
    int arr[3][3]={{1,2,3},
                   {5,6,7},
                   {9,10,11}};
    int n = 3 ; // size of row 
    int m = 3 ; // size of coloum 
    spiral_matrix(arr,n,m) ;
}