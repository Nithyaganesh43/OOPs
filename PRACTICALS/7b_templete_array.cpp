#include <iostream>
using namespace std;

template <typename T, int size>
class ArrayOperations {
private:
    T arr[size];

public:
    ArrayOperations(T initValues[]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = initValues[i];
        }
    }

    void displayArray() {
        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void bubbleSort() {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int linearSearch(T key) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int intArray[size];
    cout << "Enter " << size << " integers separated by space: ";
    for (int i = 0; i < size; ++i) {
        cin >> intArray[i];
    }

    ArrayOperations<int, size> intArrayOps(intArray);

    intArrayOps.displayArray();
    intArrayOps.bubbleSort();
    cout << "After sorting: ";
    intArrayOps.displayArray();

    int key;
    cout << "Enter an integer to search in the array: ";
    cin >> key;
    int index = intArrayOps.linearSearch(key);
    if (index != -1) {
        cout << key << " found at index " << index << endl;
    } else {
        cout << key << " not found in the array" << endl;
    }

    return 0;
}
