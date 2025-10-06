#include <iostream>
using namespace std;
void maxsum(int arr[],int n){
    int current_sum=0;
    int max_sum = INT_MIN;
    for (int i = 0; i<n ; i++){
        current_sum+=arr[i];
         max_sum = max(max_sum,current_sum);
        if (current_sum<0){
            current_sum=0 ;
        }
       
    }
    cout <<"max sum is :"<< max_sum ;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxsum(arr,n);
}