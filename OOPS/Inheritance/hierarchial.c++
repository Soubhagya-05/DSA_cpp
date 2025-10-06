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
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    d.color = "black";
    d.eat();      // from Animal
    d.bark();    
    cout << "Dog color: " << d.color << endl;

    Cat c;
    c.color = "white";
    c.eat();      // from Animal
    c.meow();    
    cout << "Cat color: " << c.color << endl;
}
