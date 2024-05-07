#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    void setName() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};
class Age : public Person {
public:
    int age;
    void setAge() {
        cout << "Enter age: ";
        cin >> age;
    }
};
class Gender : public Age {
public:
    char gender;
    void setGender() {
        cout << "Enter gender (M/W): ";
        cin >> gender;
    }
};

class DetailsPrinter : public Gender {
public:
    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    DetailsPrinter person;
    person.setName();
    person.setAge();
    person.setGender();
    cout << endl;
    person.printDetails();
    return 0;
}
