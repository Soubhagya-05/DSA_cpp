#include <iostream>
using namespace std;
int main (){
    int arr[5] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr +n);
    for(int i = 0; i < n ; i+=2){
        if (arr[i] != arr[i+1]){
            cout << arr[i] << endl;
        }

    }
}