#include <iostream>
using namespace std;
class Parent {
  public:
    void show(){
      cout << "Parent class is running ";
    }
    virtual void hello(){  // virtual function use 
      cout << "Parent class saying hello";
    }
};
class Child : public Parent {
  public :
    void show(){
      cout << "child class is running ";
    }
 void hello(){
      cout << "Child class saying hello";
    }
};
int main (){
Child c1;
Parent *ptr;
ptr = &c1;
ptr->hello();
}