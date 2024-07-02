// ALGORITHM:
// STEP 1: Define User class: Private members: name, mobilenumber, username, password. Implement constructors, getters, and setters.
// STEP 2: Define UserBO class, Private array of User objects. Add user details to array at index i, Sort array by name, Display sorted user details. Find and remove user by name. Adjust array.
// STEP 3: In Main class, Get number of users, Input name, mobile number, username, password for each user.
// STEP 4: Add details to UserBO array, Display menu: Sort/Display or Remove user. Perform the chosen action. Loop until exit.
// STEP 5: End the program.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
    string name;
    string mobileNumber;
    string username;
    string password;

public:
    User() {}

    User(string name, string mobileNumber, string username, string password) {
        this->name = name;
        this->mobileNumber = mobileNumber;
        this->username = username;
        this->password = password;
    }

    string getName() { return name; }
    string getMobileNumber() { return mobileNumber; }
    string getUsername() { return username; }
    string getPassword() { return password; }

    void setName(string name) { this->name = name; }
    void setMobileNumber(string mobileNumber) { this->mobileNumber = mobileNumber; }
    void setUsername(string username) { this->username = username; }
    void setPassword(string password) { this->password = password; }
};

class UserBO {
    vector<User> users;

public:
    void addUser(User user) {
        users.push_back(user);
    }

    void sortUsersByName() {
        int n = users.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (users[j].getName() > users[j + 1].getName()) {
                    User temp = users[j];
                    users[j] = users[j + 1];
                    users[j + 1] = temp;
                }
            }
        }
    }

    void displayUsers() {
        for (User user : users) {
            cout << "Name: " << user.getName() << ", Mobile Number: " << user.getMobileNumber()
                 << ", Username: " << user.getUsername() << ", Password: " << user.getPassword() << endl;
        }
    }

    void removeUserByName(string name) {
        for (auto it = users.begin(); it != users.end(); ++it) {
            if (it->getName() == name) {
                users.erase(it);
                return;
            }
        }
        cout << "User not found" << endl;
    }
};

int main() {
    UserBO userBO;
    int numUsers;
    cout << "Enter number of users: ";
    cin >> numUsers;

    for (int i = 0; i < numUsers; i++) {
        string name, mobileNumber, username, password;
        cout << "Enter details for user " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Mobile Number: ";
        cin >> mobileNumber;
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        User user(name, mobileNumber, username, password);
        userBO.addUser(user);
    }

    int choice;
    do {
        cout << "Menu:\n1. Sort and Display Users\n2. Remove User\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                userBO.sortUsersByName();
                userBO.displayUsers();
                break;
            case 2:
                string name;
                cout << "Enter the name of the user to remove: ";
                cin >> name;
                userBO.removeUserByName(name);
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 3);

    return 0;
}
