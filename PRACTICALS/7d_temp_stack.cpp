#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

template <typename T>
class Stack {
private:
    T elements[MAX_SIZE];
    int top_index;

public:
    Stack() {
        top_index = -1; // Initialize top_index to -1 indicating an empty stack
    }

    void push(T element) {
        if (top_index == MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push more elements." << endl;
        } else {
            elements[++top_index] = element;
            cout << element << " pushed into the stack." << endl;
        }
    }

    void pop() {
        if (top_index == -1) {
            cout << "Stack Underflow: Cannot pop from an empty stack." << endl;
        } else {
            cout << elements[top_index--] << " popped from the stack." << endl;
        }
    }

    T top() {
        if (top_index == -1) {
            cout << "Stack is empty." << endl;
            return T(); // Return default value for type T (assuming T is a class with default constructor)
        } else {
            return elements[top_index];
        }
    }

    bool isEmpty() {
        return (top_index == -1);
    }

    bool isFull() {
        return (top_index == MAX_SIZE - 1);
    }

    void display() {
        if (top_index == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top_index; ++i) {
                cout << elements[i] << " ";
            }
            cout << endl;
        }
    }
};

// Global declaration of a stack of integers
Stack<int> globalIntStack;

int main() {
    char choice;
    int element;

    do {
        cout << "Enter your choice:" << endl;
        cout << "1. Push element" << endl;
        cout << "2. Pop element" << endl;
        cout << "3. Display top element" << endl;
        cout << "4. Display stack" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter element to push: ";
                cin >> element;
                globalIntStack.push(element);
                break;
            case '2':
                globalIntStack.pop();
                break;
            case '3':
                cout << "Top element: " << globalIntStack.top() << endl;
                break;
            case '4':
                globalIntStack.display();
                break;
            case '5':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }

    } while (choice != '5');

    return 0;
}
