#include <iostream>
#include <vector>
using namespace std;
//step-1 = convert num to binary form 
//step-2 = binary form bitwise & with 00000001
//step-3 = it convert all the 1 and 0 to '0' except last element from right side 
//step-5 = if last element is '1' then it is Odd else it is '0' then it is even
// IT IS CALLED BIT MASKS 
// it is used to  access specific bits in a byte of data

void odd_even(int num){
  if (!(num & 1)){   
    cout << "Even"<< endl;
  }else{
    cout << "Odd"<< endl;
  }
}
int main(){
  odd_even(4);
  odd_even(145);
}
