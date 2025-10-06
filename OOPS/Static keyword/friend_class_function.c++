#include <iostream>
using namespace std;
class A {
string secret = "secret data";
friend class B;  // friend class syntax
friend void revealsecret(A &obj); // friend function syntax
};
class B { // friend class
  public:
void showsecret(A &obj){
cout<< obj.secret ;
}
};
void revealsecret(A &obj){ // friend function 
cout << obj.secret;
}
int main (){
  A a1;
  B b1 ;
  b1.showsecret(a1);
  revealsecret(a1);
}
