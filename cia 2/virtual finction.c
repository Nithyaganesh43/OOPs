#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows\n";
    }
};

int main() {
    Animal *animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound();  // Output: Dog barks

    animalPtr = &cat;
    animalPtr->sound();  // Output: Cat meows

    return 0;
}

// A virtual function in C++ allows a base class to define a method that can be overridden in derived classes.
//  This enables polymorphic behavior, where the correct implementation of the function is determined dynamically
//   based on the type of the object being accessed through a pointer or reference to the base class.