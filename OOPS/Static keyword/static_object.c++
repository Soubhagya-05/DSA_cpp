#include <iostream>
using namespace std;
class Exp{
  public:
  Exp(){
    cout << "constructor...\n";
  }
  ~Exp(){
    cout << "destructor...\n";
  }
};
int main (){
int a =0;
 if (a ==0){
 static  Exp e1 ;
 }
 cout << "code ending... \n";
}