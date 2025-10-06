#include <iostream>
using namespace std;
void counter1(){
  int count1 = 0; // without static 
  count1++;
  cout << count1;
  cout << endl;
}
void counter (){
  static  int count = 0;  // with static 
  count ++;
  cout << count ;
  cout << endl ;
}
int main (){
  counter1();
  counter1();
  counter1();
cout << "-\n";
  counter();
   counter();
    counter();

}