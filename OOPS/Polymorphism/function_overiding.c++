#include <iostream>
using namespace std;
class Parent {
    void show(){
      cout << "Parent class is running ";
    }
};
class Child {
  public :
    void show(){
      cout << "child class is running ";
    }
};
int main (){
Child c1 ;
c1.show();

}