#include <iostream>
using namespace std;
void print (int arr[], int n){
  for (int i = 0; i< n ; i++ ){
    cout << arr[i] << " ";
  }
}
int partion(int arr[], int si , int ei){
int i = si-1;
int pivot = arr[ei];
for (int j =0; j< ei; j++){
  if (arr[j]<= pivot){
    i++;
    swap(arr[i],arr[j]);
  }
}
i++;
swap(arr[i], arr[ei]);
return i;
}
void quick_sort (int arr[], int si, int ei ){
  if (si >= ei){
    return ;
  }
  int pivot= partion( arr, si , ei);
  quick_sort(arr, si, pivot-1);
  quick_sort(arr, pivot+1,ei );
}
int main (){
  int arr[5] = { 2,6,4,5,7};
  int n = sizeof(arr)/sizeof(int);
  quick_sort(arr,0,n-1);
  print(arr,n);
}