#include <iostream>
#include <vector>
using namespace std;
class Print {
  public:
  void show(int X){
    cout << " int :"<< X ;
  }
  void show (string X){
    cout << " string :"<< X;
  }
};
int main (){
  Print p1 ;
  p1.show ("soubhagya");


  }