#include <iostream>
using namespace std;

class a {
    int value;  
public:
    a() {
        value = 0;
    }
    a(int a) {
        value = a;
    }
    a& operator=(const a& t) {
            this->value = t.value;
        return *this;
    }
    friend void p( a& obj);  
};

void p( a& obj) {
    cout << obj.value << endl;
}

int main() {
    a A, B(10);
    A = B;
    p(A);  // Pass the object A to the function p
    return 0;
}
