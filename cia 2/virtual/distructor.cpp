#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of class A" << endl;
    }
    
    virtual ~A() {
        cout << "Destructor of class A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of class B" << endl;
    }
    
    ~B()  {
        cout << "Destructor of class B" << endl;
    }
};

int main() {
    A* obj = new B();
    delete obj;
    return 0;
}
// A virtual destructor in C++ is used in base classes when you might delete objects through pointers to the base class. 
// It ensures that the destructors of derived classes are called properly when an object is deleted via a pointer to the
//  base class, preventing memory leaks and ensuring proper cleanup of resources. Without a virtual destructor, only the
//   destructor of the base class would be called, potentially leaving derived class resources undeleted.