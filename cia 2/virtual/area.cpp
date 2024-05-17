#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() const = 0;
};

class Rectangle : public Shape {
private:
    float width;
    float height;
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    float area() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() const override {
        return 3.14f * radius * radius;
    }
};

int main() {
    Rectangle rect(5, 3);
    Circle circle(4);
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;
    return 0;
}
