#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string color;

    void eat() {
        cout << "Animal eats food" << endl;
    }
};

// Dog inherits directly from Animal (single inheritance)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;                 
    dog.color = "brown";     // Inherited from Animal
    dog.eat();               // From Animal
    dog.bark();              // From Dog
    cout << "Color: " << dog.color << endl;
}
