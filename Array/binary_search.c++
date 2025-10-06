#include <iostream>
using namespace std;
int Binary_search(int arr[],int n,int target){
    int start =0 , end = n-1 ;
 while (start < end){
        int mid = (start + end)/2 ;
        if (arr[mid] == target){
            return mid ;
        }
        else if (mid < target){
            start = mid +1 ;
        }else if (mid > target){
            end = mid -1 ;
        }
    }
    return -1 ;
}
int main (){
    int sb[5]= {1,2,3,4,5};
    int p = 5 ;
    int key = 4 ;
    cout << Binary_search(sb,p,key)<< endl ;
}