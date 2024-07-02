#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> s) {
    cout << "Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print elements of the stack
    printStack(myStack);

    // Check the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Pop an element from the stack
    myStack.pop();

    // Print elements of the stack after popping
    printStack(myStack);

    return 0;
}
