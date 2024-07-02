#include <iostream>
#include <string>

using namespace std;

// AIM:
// 1. Define a base class Animal with properties name and age.
// 2. Implement constructors and member functions (getters and setters) for Animal.
// 3. Define a derived class Dog that inherits from Animal.
// 4. Implement constructors and member functions (getters and setters) for Dog.
// 5. Add a method speak() in Dog to display a specific message.

// Step 1: Define the base class Animal
class Animal {
protected:
    string name;
    int age;

public:
    Animal(const string& n, int a) : name(n), age(a) {}

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }

    string getName() const { return name; }
    int getAge() const { return age; }
};

// Step 3: Define the derived class Dog inheriting from Animal
class Dog : public Animal {
private:
    string breed;

public:
    Dog(const string& n, int a, const string& b) : Animal(n, a), breed(b) {}

    void setBreed(const string& b) { breed = b; }
    string getBreed() const { return breed; }

    // Step 5: Add a method speak() to Dog class
    void speak() const {
        cout << "I am a dog. Woof!" << endl;
    }
};

int main() {
    string name, breed;
    int age;

    // Step 6: Get user input for name, age, and breed
    cout << "Enter dog's name: ";
    getline(cin, name);
    cout << "Enter dog's age: ";
    cin >> age;
    cin.ignore(); // Ignore newline left by cin
    cout << "Enter dog's breed: ";
    getline(cin, breed);

    // Step 7: Create a Dog object using user input
    Dog myDog(name, age, breed);

    // Displaying dog details
    cout << "\nDog Details:" << endl;
    cout << "Name: " << myDog.getName() << endl;
    cout << "Age: " << myDog.getAge() << endl;
    cout << "Breed: " << myDog.getBreed() << endl;

    // Step 8: Call the speak() method to demonstrate behavior
    myDog.speak();

    return 0;
}
