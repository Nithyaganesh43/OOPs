#include <iostream>
using namespace std;

class A {
    
public:int x;
    A() {}
    A(int i) : x(i) {}

    friend void operator+(const A& a, const A& b); // Declaration of friend operator+

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

void operator+(const A& a, const A& b) {
    int m = b.x + a.x;
    cout << "Value of x: "<<m;
}

int main() {
    A a1(5);
    A a2(4);

   a1 + a2; // Call the operator+ function
   

    return 0;
}
