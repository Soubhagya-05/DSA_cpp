#include <iostream>
using namespace std;
int  search(int arr[], int si , int ei,int target  ){
  if (si > ei ){ // Base Case 
    return -1;
  }
  int mid = si + (ei - si)/2;
    if (arr[mid] == target){
      return mid ;
    }

  if (arr[si] <= arr[mid]){ // L1
    if (arr[si]<= target && target <= arr[mid]){ // left_half
       return search(arr,si,mid-1,target);
    }else{
       return search(arr,mid+1,ei, target); // right_half
      }
 }else { //L2
    if (arr[mid]<= target && target <= arr[ei]){ //right_half
      return  search(arr,mid+1,ei, target);
   }else{
      return search(arr,si,mid-1,target); // left_half
      }
    }
  }
  int main (){
    int arr []={4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
  cout << "the idx is :" << search(arr,0,n-1,0)<< endl; 
  }
