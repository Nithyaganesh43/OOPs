// #include <iostream>
// using namespace std;

// // Abstract class
// class Shape {
// public:
//     // Pure virtual function
//     virtual void draw() = 0;

//     // Normal member function
//     void display() {
//         cout << "Displaying shape..." << endl;
//     }
// };

// // Derived class
// class Circle : public Shape {
// public:
//     // Implementation of the pure virtual function
//     void draw() {
//         cout << "Drawing circle..." << endl;
//     }
// };

// // Derived class
// class Rectangle : public Shape {
// public:
//     // Implementation of the pure virtual function
//     void draw() {
//         cout << "Drawing rectangle..." << endl;
//     }
// };

// int main() {
//     // Creating objects of derived classes
//     Circle circle;
//     Rectangle rectangle;

//     // Calling draw functions
//     circle.draw();
//     rectangle.draw();

//     // Calling a member function of the base class
//     circle.display();
//     rectangle.display();
// Shape a;
//     return 0;
// }
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw(){cout<<"\nhuhib";}

    // Normal member function
    void display() {
        cout << "Displaying shape..." << endl;
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class
class Circle : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        cout << "Drawing circle..." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Implementation of the pure virtual function
    void draw() override {
        cout << "Drawing rectangle..." << endl;
    }
};

int main() {
    // Pointers to base class
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Calling draw functions through base class pointers
    shape1->draw();
    shape2->draw();

    // Calling display function through base class pointers
    shape1->display();
    shape2->draw();

    // Cleaning up
    delete shape1;
    delete shape2;
Rectangle f;
f.display();
    return 0;
}
