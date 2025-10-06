#include <iostream>
#include <string>
using namespace std;
class Teacher {
 public:
  int salaary ;
  string subject ;
};
class Student {
public:
  int roll_no;
  string branch ;
};
class TA : public Teacher, public Student {
public:
  string name ;
};
int main (){
  TA t1;
  t1.name = "SOUBHAGYA";
  t1.branch = "CSE-AIML";
  t1.subject = "C++";
  t1.roll_no = 2404066;
  t1.salaary =  10000;
  cout<< "Name: "<< t1.name<<endl;
    cout<<"Branch: "<< t1.branch<<endl ;
      cout<<"subject: "<< t1.subject<<endl;
        cout<<"roll_no: "<< t1.roll_no << endl;
          cout<< "salaary: "<< t1.salaary<<endl;
 
}