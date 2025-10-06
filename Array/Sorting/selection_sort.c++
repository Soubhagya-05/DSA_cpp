#include <iostream>
using namespace std;
void print(int arr[], int n){
    for (int i =0; i< n;i++){
        cout << arr[i] ;
    }
}
void selection(int arr[],int n ){
   
    for(int i = 0 ; i < n-1 ; i++){
        int minimum = i ;
        for ( int j = i+1 ; j< n ; j ++){
            if (arr[j]< arr[minimum]){
                swap(arr[j],arr[minimum]);
            }
        }
    }
    print(arr,n);
}
int main (){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int) ;
    selection(arr,n);
}