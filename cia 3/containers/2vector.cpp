#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    // Vector define panni initialize panradhu
    vector<int> vec = {1, 2, 3, 4, 5};

    // Iterators
    // begin() use panni first element ah point panradhu
    cout << "Using begin(): ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    // Output: Using begin(): 1 2 3 4 5

    // rbegin() use panni last element ah point panradhu (reverse)
    cout << "Using rbegin(): ";
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;
    // Output: Using rbegin(): 5 4 3 2 1

    // cbegin() use panni first element ah constant iterator la point panradhu
    cout << "Using cbegin(): ";
    for (auto cit = vec.cbegin(); cit != vec.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << endl;
    // Output: Using cbegin(): 1 2 3 4 5

    // crbegin() use panni last element ah constant reverse iterator la point panradhu
    cout << "Using crbegin(): ";
    for (auto crit = vec.crbegin(); crit != vec.crend(); ++crit) {
        cout << *crit << " ";
    }
    cout << endl;
    // Output: Using crbegin(): 5 4 3 2 1

    // Capacity
    // vector size enna nu theriyardhu
    cout << "Size of the vector: " << vec.size() << endl;
    // Output: Size of the vector: 5

    // vector maximum size enna nu theriyardhu
    cout << "Max size of the vector: " << vec.max_size() << endl;
    // Output: Max size of the vector: (depends on the implementation)

    // vector capacity enna nu theriyardhu
    cout << "Capacity of the vector: " << vec.capacity() << endl;
    // Output: Capacity of the vector: (depends on the implementation)

    // resize() use panni vector size change panradhu
    vec.resize(3);
    cout << "After resize(3): ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After resize(3): 1 2 3

    // vector empty ah iruka nu check panradhu
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;
    // Output: Is the vector empty? No

    // shrink_to_fit() use panni vector capacity reduce panradhu
    vec.shrink_to_fit();
    cout << "Capacity after shrink_to_fit(): " << vec.capacity() << endl;
    // Output: Capacity after shrink_to_fit(): (depends on the implementation)

    // reserve() use panni vector capacity increase panradhu
    vec.reserve(10);
    cout << "Capacity after reserve(10): " << vec.capacity() << endl;
    // Output: Capacity after reserve(10): 10

    // Element access
    // element at index 1 access panradhu
    cout << "Element at index 1: " << vec[1] << endl;
    // Output: Element at index 1: 2

    // element at index 2 access panradhu using at()
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;
    // Output: Element at index 2 using at(): 3

    // first element access panradhu
    cout << "First element: " << vec.front() << endl;
    // Output: First element: 1

    // last element access panradhu
    cout << "Last element: " << vec.back() << endl;
    // Output: Last element: 3

    // data() use panni elements access panradhu (pointer arithmetic use panni)
    int* data_ptr = vec.data();
    cout << "Elements using data() pointer: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << *(data_ptr + i) << " ";
    }
    cout << endl;
    // Output: Elements using data() pointer: 1 2 3

    // Modifiers
    // assign() use panni vector la new values set panradhu
    vec.assign(5, 10);
    cout << "After assign(5, 10): ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After assign(5, 10): 10 10 10 10 10

    // push_back() use panni new element add panradhu
    vec.push_back(20);
    cout << "After push_back(20): ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After push_back(20): 10 10 10 10 10 20

    // pop_back() use panni last element remove panradhu
    vec.pop_back();
    cout << "After pop_back(): ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After pop_back(): 10 10 10 10 10

    // insert() use panni specific position la new element add panradhu
    vec.insert(vec.begin() + 2, 30);
    cout << "After insert at position 2 (30): ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After insert at position 2 (30): 10 10 30 10 10 10

    // erase() use panni specific position la element remove panradhu
    vec.erase(vec.begin() + 2);
    cout << "After erase at position 2: ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After erase at position 2: 10 10 10 10 10

    // swap() use panni vec and vec2 swap panradhu
    vector<int> vec2 = {1, 2, 3};
    vec.swap(vec2);
    cout << "After swap with vec2: ";
    for (const auto& x : vec) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After swap with vec2: 1 2 3

    // clear() use panni vector empty panradhu
    vec.clear();
    cout << "After clear(): " << (vec.empty() ? "Vector is empty" : "Vector is not empty") << endl;
    // Output: After clear(): Vector is empty

    return 0;
}
