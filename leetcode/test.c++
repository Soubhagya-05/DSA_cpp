#include <iostream>
using namespace std;
bool Ispalindrome( int n ){
    int org = n;
    int rev =0;
    while (n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev == org ;
}
int main (){
    int n  ;
    cout << "Enter a number :";
    cin >> n;
    cout << Ispalindrome(n) << endl;

}