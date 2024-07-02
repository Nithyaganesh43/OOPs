#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for std::toupper

using namespace std;

vector<string> capitalizeFirst(vector<string> strVector) {
    vector<string> result;

    for (string str : strVector) {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
            result.push_back(str);
        } else {
            result.push_back(""); // handle empty strings as needed
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> inputStrings(n);
    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> inputStrings[i];
    }

    cout << "Original vector:" << endl;
    for (string str : inputStrings) {
        cout << str << " ";
    }
    cout << endl;

    vector<string> capitalizedStrings = capitalizeFirst(inputStrings);

    cout << "Capitalized vector:" << endl;
    for (string str : capitalizedStrings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
