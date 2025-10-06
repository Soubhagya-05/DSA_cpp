#include <iostream>
#include <climits>
using namespace std ;
void trapwater(int height[],int n){
    int leftbar[20000];
        leftbar[0]=0;
        int maxwater_trap = 0;
        int totalwatertap = 0; 
    for (int i =1; i<n ;i++){
        leftbar[i]=max(leftbar[i-1],height[i-1]);
       
    }
     int rightbar[20000];
        rightbar[n-1]=0;
    for (int i =n-2; i>=0 ;i--){
        rightbar[i]=max(rightbar[i+1],height[i+1]);
   
    }
    for (int i = 0; i< n ; i++){
        int currentwater = 0;
        currentwater = min(leftbar[i],rightbar[i]) - height[i];
        if ( currentwater< 0){
            currentwater = 0;
        }
        totalwatertap += currentwater ;
        
        maxwater_trap = max (currentwater,maxwater_trap);
    }
    cout << "maximum water trap is :" << maxwater_trap << endl ;
    cout << "total trap is :" <<totalwatertap<< endl ;
    
}
int main (){
    int arr[5]={7,5,9,1,2};
    int n = sizeof(arr)/sizeof(int);
trapwater(arr,n);
}

  