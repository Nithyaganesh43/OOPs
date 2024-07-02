#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Declare and initialize vectors for integers and strings
    vector<int> intArray = {10, 20, 30, 40, 50};
    vector<string> strArray = {"apple", "banana", "orange"};

    // Display elements of the integer vector
    cout << "Elements of the integer vector:" << endl;
    for (int i = 0; i < intArray.size(); ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Display elements of the string vector
    cout << "Elements of the string vector:" << endl;
    for (int i = 0; i < strArray.size(); ++i) {
        cout << strArray[i] << " ";
    }
    cout << endl;

    return 0;
}
