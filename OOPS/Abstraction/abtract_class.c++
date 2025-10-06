#include <iostream>
using namespace std;
class Shape {
  public:
  virtual void draw() = 0; // Abstract fucntion 

};
class Circle : public Shape {
  public:
  void draw (){
    cout << "Draw a circle\n ";
  }
};
class Square : public Shape {
  public:
  void draw (){
    cout << "Draw a square\n ";
  }
};
int main (){
  Circle cir1 ;
  Square sqr1 ;
  cir1.draw ();
  sqr1.draw();

}