#include <iostream>
#include <string>
using namespace std;
class Student{
        string name;
        int roll;
        float cgpa;
        string branch;
 public:
    void setname(string nameval){
    name = nameval;
    }
    string getname(){
    return name;
    }
};
int main (){
    Student s1 ;
    s1.setname("SOUBHAGYA");
cout<<"name:" << s1.getname()<<endl;
}