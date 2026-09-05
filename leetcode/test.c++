#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
 string name;
 cout << " Enter your name:";
 cin >> name;

 string pass ;
 cout << "Enter your password:";
 cin >> pass;
 bool upper  = false;
 bool one_digit = false;
  for ( char c : pass ){
    if (isupper(c)){
        upper = true;;
    }
    if (isdigit(c)){
        one_digit = true;
    }
  }
  if (name.length() < 5 ){
    cout << "Username must contain at least 5 characters" << endl;
 }
  if (pass.length() < 8 && !upper && !one_digit){
    cout << "Password must contain at least 8 characters" << endl;
    cout << "Password must contain at least one uppercase letter" << endl;
     cout << "Password must contain at least one digit" << endl;
  } else if (pass.length() < 8 && !one_digit){
        cout << "Password must contain at least 8 characters" << endl;
         cout << "Password must contain at least one digit" << endl;
  }else if (!upper && !one_digit){
    cout << "Password must contain at least one uppercase letter" << endl;
     cout << "Password must contain at least one digit" << endl;
  }
  else if (!upper && pass.length() < 8){
    cout << "Password must contain at least one uppercase letter" << endl;
  
       cout << "Password must contain at least 8 characters" << endl;
  }else if (pass.length() < 8){
    cout << "Password must contain at least 8 characters" << endl;
  }else if (!upper){
    cout << "Password must contain at least one uppercase letter" << endl;
    }else if (!one_digit){
    cout << "Password must contain at least one digit" << endl;
    }
  else {
    cout  << " Login validation successful." << endl;
  }
}