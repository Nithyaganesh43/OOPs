#include <iostream>
#include <list>

using namespace std;

// Function to print elements of the linked list
void printList(const list<int>& myList) {
    cout << "Linked List: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // Declare a linked list of integers
    list<int> myList;

    // Insert elements into the linked list
    myList.push_back(10);   // Adds 10 to the end
    myList.push_front(5);   // Adds 5 to the beginning
    myList.push_back(20);   // Adds 20 to the end

    // Print the elements of the linked list after insertion
    cout << "After Insertion:" << endl;
    printList(myList);

    // Delete an element from the linked list
    myList.pop_front();     // Removes the first element

    // Print the elements of the linked list after deletion
    cout << "After Deletion:" << endl;
    printList(myList);

    return 0;
}
