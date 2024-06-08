#include <iostream>
#include <forward_list>

using namespace std;

void demo_forward_list() {
    forward_list<int> fl;

    // assign() function - 3 types
    // 1. initializer list
    fl.assign({1, 2, 3}); // list: 1, 2, 3
    cout << "After assign({1, 2, 3}): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // 2. fill assign - same value multiple times
    fl.assign(2, 5); // list: 5, 5
    cout << "After assign(2, 5): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // 3. range assign - another forward_list
    forward_list<int> fl2 = {7, 8, 9};
    fl.assign(fl2.begin(), fl2.end()); // list: 7, 8, 9
    cout << "After assign(fl2.begin(), fl2.end()): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // push_front() function - front-la element add pannum
    fl.push_front(6); // list: 6, 7, 8, 9
    cout << "After push_front(6): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // pop_front() function - front-la irundhu element remove pannum
    fl.pop_front(); // list: 7, 8, 9
    cout << "After pop_front(): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // remove() function - specific value remove pannum
    fl.remove(8); // list: 7, 9
    cout << "After remove(8): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // remove_if() function - condition satisfy pannra elements-a remove pannum
    fl.remove_if([](int x) { return x > 7; }); // list: 7
    cout << "After remove_if(x > 7): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // clear() function - ellaa elements-um remove pannum
    fl.clear(); // list: (empty)
    cout << "After clear(): ";
    if (fl.empty()) {
        cout << "forward_list is empty." << endl;
    }

    // insert_after() function - oru position-aprum element insert pannum
    fl = {1, 3, 4}; // reset list: 1, 3, 4
    auto it = fl.begin();
    fl.insert_after(it, 2); // list: 1, 2, 3, 4
    cout << "After insert_after(begin(), 2): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // erase_after() function - oru position-aprum element remove pannum
    it = fl.begin();
    fl.erase_after(it); // list: 1, 3, 4
    cout << "After erase_after(begin()): ";
    for (const auto& elem : fl) {
        cout << elem << " ";
    }
    cout << endl;

    // slice_after() function - oru position-ku apprum elements-a slice pannum
    forward_list<int> fl3 = {10, 20, 30, 40, 50};
    auto it2 = fl3.begin();
    advance(it2, 2); // position it2: 10, 20, 30, 40, 50 (it2 -> 30)
    forward_list<int> fl4;
    fl4.splice_after(fl4.before_begin(), fl3, it2); // fl3: 10, 20, 30 | fl4: 40, 50
    cout << "After splice_after(it2): " << endl;
    cout << "fl3: ";
    for (const auto& elem : fl3) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "fl4: ";
    for (const auto& elem : fl4) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    demo_forward_list();
    return 0;
}
