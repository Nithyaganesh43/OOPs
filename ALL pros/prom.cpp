#include <iostream>

using namespace std;

class Student {
public:
    static int passMark;
    int roll;
    int subjMarks[5];

    bool fail() {
        int totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += subjMarks[i];
        }
        return totalMarks < passMark;
    }

    void display() {
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i+1 << " ROll:" <<i+100 << " Marks: " << subjMarks[i]  <<endl;
        }
    }
};

int Student::passMark = 40;

int main() {
    Student student;
    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter marks for Subject " << i+1 << ": ";
        cin >> student.subjMarks[i];
    }

    cout << "Displaying marks:" << endl;
    student.display();

    if (student.fail()) {
        cout << "The student has failed." << endl;
    } else {
        cout << "The student has passed." << endl;
    }

    return 0;
}
