#include <iostream>
using namespace std;

class gamil {
    string name;

public:
    gamil(string a) {
        name = a;
    }

    // Overloading unary operator&
    string operator&(){
        cout << name << "@gmail.com";
    }
};

int main() {
    gamil nithi("nithyaganesh");
    cout<<&nithi; // Call the overloaded & operator
    return 0;
}
