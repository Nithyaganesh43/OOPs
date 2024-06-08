#include <iostream>
#include <stack>

using namespace std;

void demo_stack() {
    stack<int> s;

    // push() function - stack-ku elements add pannum
    s.push(10); // stack: 10
    s.push(20); // stack: 10, 20
    s.push(30); // stack: 10, 20, 30

    cout << "Stack elements after push operations: " << endl;
    cout << "Top element: " << s.top() << endl; // top() function

    // pop() function - top element remove pannum
    s.pop(); // stack: 10, 20
    cout << "Stack elements after pop operation: " << endl;
    cout << "Top element: " << s.top() << endl;

    // empty() function - stack empty-a check pannum
    if (!s.empty()) {
        cout << "Stack is not empty" << endl;
    } else {
        cout << "Stack is empty" << endl;
    }

    // size() function - stack-la evlo elements-nu sollum
    cout << "Stack size: " << s.size() << endl;

    // pop remaining elements
    s.pop(); // stack: 10
    s.pop(); // stack: empty

    // check empty after popping all elements
    if (!s.empty()) {
        cout << "Stack is not empty" << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main() {
    demo_stack();
    return 0;
}
