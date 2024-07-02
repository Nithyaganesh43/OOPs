#include <iostream>
using namespace std;

// Function template to swap values of any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Variables to hold user input
    T value1, value2;

    // Input values
    cout << "Enter two values separated by space: ";
    cin >> value1 >> value2;

    // Swap values
    swapValues(value1, value2);
    cout << "After swapping: " << value1 << ", " << value2 << endl;

    return 0;
}
