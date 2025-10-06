#include <iostream>
#include <climits>
using namespace std ;
void stockprice(int price[],int n){
    int bestbuy[100000];
        bestbuy[0]=INT_MAX;
        int max_profit = 0 ;
    for (int i =1; i<n ;i++){
        bestbuy[i]=min(price[i-1],bestbuy[i-1]);
    }
    for (int i =0; i<n ; i++){
        int current_price =0;
            current_price = price[i]- bestbuy[i];
            max_profit = max(current_price , max_profit);
    }
        cout << " maximum profit is : "<< max_profit ; 

}
int main (){
    int arr[5]={7,5,9,1,2};
    int n = sizeof(arr)/sizeof(int);
 stockprice(arr,n);
}

  