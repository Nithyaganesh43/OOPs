#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() const {
        cout << "Base class show function" << endl;
    }
    virtual void display() const {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() const override {
        cout << "Derived class show function" << endl;
    }
    void display() const override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    b->show();  // Calls Derived's show()
    b->display();  // Calls Derived's display()

    return 0;
}
