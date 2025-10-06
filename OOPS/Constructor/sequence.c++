#include <iostream>
using namespace std;
class A {
  public:
  A(){
    cout << "-> Parent Constructor\n"; // 1st 
  }
   ~A(){
    cout << "-> Parent Destructor\n"; // 4th
  } 
};
class B : public A {
  public :
  B(){
    cout << "-> Child Constructor\n"; // 2nd
  }
   ~B(){
    cout << "-> Child Destructor\n"; // 3rd
  } 
};
int main (){
  B child ;
  
}
