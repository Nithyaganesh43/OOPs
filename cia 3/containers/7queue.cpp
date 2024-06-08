#include <iostream>
#include <queue>

using namespace std;

void demo_queue() {
    queue<int> q;

    // push() function - queue-ku elements add pannum
    q.push(10); // queue: 10
    q.push(20); // queue: 10, 20
    q.push(30); // queue: 10, 20, 30

    cout << "Queue elements after push operations: " << endl;
    cout << "Front element: " << q.front() << endl; // front() function
    cout << "Back element: " << q.back() << endl;   // back() function

    // pop() function - front element remove pannum
    q.pop(); // queue: 20, 30
    cout << "Queue elements after pop operation: " << endl;
    cout << "Front element: " << q.front() << endl;

    // empty() function - queue empty-a check pannum
    if (!q.empty()) {
        cout << "Queue is not empty" << endl;
    } else {
        cout << "Queue is empty" << endl;
    }

    // size() function - queue-la evlo elements-nu sollum
    cout << "Queue size: " << q.size() << endl;

    // pop remaining elements
    q.pop(); // queue: 30
    q.pop(); // queue: empty

    // check empty after popping all elements
    if (!q.empty()) {
        cout << "Queue is not empty" << endl;
    } else {
        cout << "Queue is empty" << endl;
    }
}

int main() {
    demo_queue();
    return 0;
}
