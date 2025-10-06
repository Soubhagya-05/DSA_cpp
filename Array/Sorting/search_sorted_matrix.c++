#include <iostream>
using namespace std;
bool staircase_approach(int arr[][4],int n,int m, int target){
    int i = n-1 , j = 0;
    while (i >=0 && j<= m-1){
         if (arr[i][j]== target){
            cout <<"Target found at indext ("<< i << ","<< j << ")" << endl;
            return true ;
        }else if (arr[i][j]< target){
            j++ ;
        }else {
            i-- ;
        }

    }
     cout << "Target not found " ;
     return false ;
  }
    int main(){
    int arr[4][4] = {
                {10,20,30,40},
                {15,25,35,45},
                {27,29,37,48},
                {32,33,39,50}
                };
    int n = 4;
    int m = 4 ;
    int target = 33 ;
    cout << staircase_approach(arr,n,m,target) << endl ;
}