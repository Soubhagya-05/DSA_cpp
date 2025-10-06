#include <iostream>
using namespace std;
void max_sum(int arr[],int n){
        int maxsum = INT_MIN ;
    for (int st=0; st<n; st++){
        int current_sum = 0 ;
        for (int end= st; end< n; end++){
            current_sum += arr[end];
          maxsum = max(maxsum,current_sum);      
        }
    }
    cout << maxsum ;
}
int main (){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
max_sum(arr,n);
}