#include <iostream>
using namespace std;
void dcount(int n){
  if(n== 0){
    return ;
  }
 cout << n << " " ; // this can be convert to acending order by reversing "cout" and "dcount(n-1)"
  dcount(n-1);
}
int main (){
  int n  = 100;
dcount(n);
}