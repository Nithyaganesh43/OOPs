#include <iostream>
#include <string>
using namespace std;
class Age {
    int age;
public:
    Age(int a) {
        age = a;
    }
    Age(const Age &t) {
        age = t.age;
    }
    int getAge() {
        return age;
    }
};
class Person {
    string name;
    Age *agep;
public:
    Person(string na, Age &ag) {
        name = na;
        agep = new Age(ag);
    }

    void print() {
        cout << name << " is " << agep->getAge() << " years old." << endl;
    }

    ~Person() {
        delete agep;
    }
};

int main() {
    Age p1(18);
    Person p("poojana", p1);
    p.print();

    return 0;
}
