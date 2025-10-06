#include <iostream>
using namespace std;
void print(int arr[], int n){
    for (int i =0; i< n;i++){
        cout << arr[i] ;
    }
}
void insertion(int arr[],int n ){
   
    for(int i = 1 ; i < n-1 ; i++){
        int current= arr[i] ;
        int prev = i-1;
       while (prev>=0 && arr[prev] > current){
        swap(arr[prev],arr[prev+1]);
        prev--;
       }
    }
    print(arr,n);

}
int main (){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int) ;
    insertion(arr,n);
}