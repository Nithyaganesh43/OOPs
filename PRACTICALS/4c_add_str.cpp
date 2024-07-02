#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2, newString;

    // Get the first string from the user
    cout << "Enter the first string: ";
    cin >> string1;

    // Get the second string from the user
    cout << "Enter the second string: ";
    cin >> string2;

    // Concatenate the two strings
    newString = string1 + string2;

    // Output the new concatenated string
    cout << "The concatenated string is: " << newString << endl;

    return 0;
}
