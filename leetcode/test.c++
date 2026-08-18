#include <iostream>
using namespace std;
int main () {

int n ;
cout << "Enter the number of elements: ";
cin >> n;
int org = n;
int rev = 0;
while ( n > 0){
int digit = n %10;
rev = rev * 10 + digit ;

n /=10;
}
if ( org == rev){
    cout << "The number is a palindrome" << endl;
}else {
    cout << "The number is not a palindrome" << endl;
}
}
