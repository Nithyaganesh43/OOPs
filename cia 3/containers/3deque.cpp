#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    // Deque define panni initialize panradhu
    deque<int> deq = {1, 2, 3, 4, 5};

    // insert() use panni element insert panradhu
    auto it = deq.insert(deq.begin() + 2, 10);
    cout << "After insert(10) at position 2: ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After insert(10) at position 2: 1 2 10 3 4 5

    // rbegin() use panni last element ah point panradhu (reverse)
    cout << "Using rbegin(): ";
    for (auto rit = deq.rbegin(); rit != deq.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;
    // Output: Using rbegin(): 5 4 3 10 2 1

    // cbegin() use panni first element ah constant iterator la point panradhu
    cout << "Using cbegin(): ";
    for (auto cit = deq.cbegin(); cit != deq.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << endl;
    // Output: Using cbegin(): 1 2 10 3 4 5

    // max_size() use panni deque maximum size kandupidikradhu
    cout << "Maximum size of the deque: " << deq.max_size() << endl;
    // Output: Maximum size of the deque: (depends on the implementation)

    // assign() use panni deque elements ku new values assign panradhu
    deq.assign(4, 20);
    cout << "After assign(4, 20): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After assign(4, 20): 20 20 20 20

    // resize() use panni deque size change panradhu
    deq.resize(6, 30);
    cout << "After resize(6, 30): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After resize(6, 30): 20 20 20 20 30 30

    // push_front() use panni element front la add panradhu
    deq.push_front(40);
    cout << "After push_front(40): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After push_front(40): 40 20 20 20 20 30 30

    // push_back() use panni element back la add panradhu
    deq.push_back(50);
    cout << "After push_back(50): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After push_back(50): 40 20 20 20 20 30 30 50

    // pop_front() use panni element front la remove panradhu
    deq.pop_front();
    cout << "After pop_front(): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After pop_front(): 20 20 20 20 30 30 50

    // pop_back() use panni element back la remove panradhu
    deq.pop_back();
    cout << "After pop_back(): ";
    for (const auto& x : deq) {
        cout << x << " ";
    }
    cout << endl;
    // Output: After pop_back(): 20 20 20 20 30 30

    // front() use panni first element ah reference panradhu
    cout << "First element: " << deq.front() << endl;
    // Output: First element: 20

    // back() use panni last element ah reference panradhu
    cout << "Last element: " << deq.back() << endl;
    // Output: Last element: 30

    // clear() use panni deque elements remove panradhu
    deq.clear();
    cout << "After clear(): " << (deq.empty() ? "Deque is empty" : "Deque is not empty") << endl;
    // Output: After clear(): Deque is empty

    return 0;
}
