#include <iostream>
#include <vector>
using namespace std;
class Complex {
  int real ;
  int img;
public :
 Complex(int r , int i){
  real = r;
  img = i ;

 }
 void shownm(){
  cout << real << " + " << img << "i\n";
 }
 Complex operator + ( Complex &c2){
  int realresult = this-> real + c2.real ;
  int imgresult = this -> img + c2.img ;
Complex c3 (realresult,imgresult);
return c3 ;
 }
};
int main (){
  Complex c1 ( 1 , 2);
  Complex c2 ( 3, 4 ) ;
 c1.shownm();
 c2.shownm();
 Complex c3 (c1 + c2);
 c3.shownm();
}

  