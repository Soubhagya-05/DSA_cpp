#include <iostream>
#include <vector>
using namespace std;
int main (){
    int EmID;
    cout << "Enter Employee ID:";
    cin >> EmID;
    double salaary, HRA, DA, Gross_salaary, PF, TAX, Net_salaary;
    cout << "Enter Employee Salaary:";
    cin >> salaary;
    HRA = 0.20 * salaary;
    DA = 0.10 * salaary ;
    Gross_salaary = salaary + HRA + DA;
    PF = 0.12 * salaary ;
    if (Gross_salaary > 50000){
        TAX = 0.10 * Gross_salaary;
    }else {
        TAX = 0.05 * Gross_salaary;
    }
    Net_salaary = Gross_salaary - PF - TAX;

    cout << " ==================================="<< endl;
    cout << "           PHILIPS SALAARY SLIP     "<< endl;
    cout << " ==================================="<< endl;
    cout << "Employee ID :" << EmID << endl;
    cout << "Basic Salaary :"<< salaary << endl;
    cout << " ==================================="<< endl;

    cout << "HRA (20%):"<< HRA << endl;
    cout << "DA(10%):"<< DA << endl;
    cout <<"Gross Salaary:" << Gross_salaary << endl;
    cout << " ==================================="<< endl;
    cout << "PF(12%):"<< PF << endl;
    cout << "TAX(10%):"<< TAX << endl;
    cout << " ==================================="<< endl;
    cout << "NET SALAARY :" <<  Net_salaary << endl;





}