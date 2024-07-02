#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        this->radius = r;
    }

    float calculateArea() {
        return 3.14 * this->radius * this->radius;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        this->length = l;
        this->width = w;
    }

    float calculateArea() {
        return this->length * this->width;
    }
};

int main() {
    Shape *shape1, *shape2;

    Circle c(5);
    Rectangle r(10, 5);

    shape1 = &c;
    shape2 = &r;

    cout << "Area of Circle: " << shape1->calculateArea() << endl;
    cout << "Area of Rectangle: " << shape2->calculateArea() << endl;

    return 0;
}
