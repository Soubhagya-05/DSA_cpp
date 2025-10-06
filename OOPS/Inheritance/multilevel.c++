#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string color;
    void eat() {
        cout << "eates" << endl;
    }
};

class Mamal : public Animal {
public:
    string bloodtype;
    Mamal() {
        bloodtype = "warmblood";
    }
};

class Dog : public Mamal {
public:
    void swingtail() {
        cout << "tail swings" << endl;
    }
};

int main() {
    Dog dog;                   //  Dog object, not Animal
    dog.color = "white";       // from Animal
    dog.eat();                 // from Animal
    dog.swingtail();           // from Dog
    cout << dog.color << endl; // from Animal
    cout << dog.bloodtype << endl; // from Mamal
}
