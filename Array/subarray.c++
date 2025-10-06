#include <iostream>
using namespace std;
int main (){
    int arr [5];
    for (int i=0; i< 5; i++){
    cout << " enter the 5 integer elements of the array: ";
    cin >> arr[i];
    }
     for (int st = 0; st < 5; st++) { 
        for (int end = st; end < 5; end++) {
            for (int i = st; i <= end; i++) { 
                cout << arr[i] ;
            }
            cout << ", ";
        }
        cout << endl ;
    }

    return 0;
}