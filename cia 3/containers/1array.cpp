#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    // Define and initialize an std::array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // Array elements ah display panra for loop
    cout << "Elements of the array: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    // Output: Elements of the array: 1 2 3 4 5

    // at() method use panni element access panradhu similar to []
    cout << "Element at index 2: " << arr.at(2) << endl;
    // Output: Element at index 2: 3

    // operator[] use panni element access panradhu
    cout << "Element at index 3: " << arr[3] << endl;
    // Output: Element at index 3: 4

    // First element ah access panradhu
    cout << "First element: " << arr.front() << endl;
    // Output: First element: 1

    // Last element ah access panradhu
    cout << "Last element: " << arr.back() << endl;
    // Output: Last element: 5

    // Array size enna nu theriyardhu
    cout << "Size of the array: " << arr.size() << endl;
    // Output: Size of the array: 5

    // Array empty ah illaya nu check panradhu
    cout << "Is the array empty? " << (arr.empty() ? "Yes" : "No") << endl;
    // Output: Is the array empty? No

    // Array la specific value fill panradhu
    arr.fill(10);
    cout << "Array after fill(10): ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    // Output: Array after fill(10): 10 10 10 10 10

    // Inime use panrathuku array reset panradhu
    arr = {1, 2, 3, 4, 5};

    // std::sort use panni array sort panradhu
    std::sort(arr.begin(), arr.end());
    cout << "Array after sorting: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    // Output: Array after sorting: 1 2 3 4 5

    // std::reverse use panni array reverse panradhu
    std::reverse(arr.begin(), arr.end());
    cout << "Array after reversing: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    // Output: Array after reversing: 5 4 3 2 1

    // data() use panni elements access panradhu (pointer arithmetic use panni)
    int* ptr = arr.data();
    cout << "Elements using data() pointer: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    // Output: Elements using data() pointer: 5 4 3 2 1

    return 0;
}
