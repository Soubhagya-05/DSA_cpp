#include <iostream>
#include <vector>
using namespace std;
int main (){
    int working_Days = 26;
    float Day_present ;
    cout << " Enter your Day present : ";
    cin >> Day_present;
    float Attendance = (working_Days/ 26) * 100;
    if (Attendance >= 90){
        cout << "Excellent" <<endl;
    }else if (Attendance >= 75) {
        cout << "Good "<< endl;
    }else if(Attendance >= 60){
        cout <<"Warning "<< endl;
    }else {
        cout << "Criticak"<< endl;
    }
}