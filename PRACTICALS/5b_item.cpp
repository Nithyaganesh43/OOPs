// ALGORITHM:
// STEP 1: Define the Item class and initialize private variables itemId, itemName, itemType, and itemVendor.
// STEP 2: Create a default constructor to set itemType to "Electricals" and itemVendor to "Arun Electricals". 
//         Create a parameterized constructor to set all variables. Create getters for each variable.
// STEP 3: Define the Main class. Display menu: "1. Electronics" and "2. Others". Get user choice. 
// STEP 4: If the choice is 1 (Electronics), prompt for itemId and itemName. Create Item object using the default constructor. 
//         If the choice is 2 (Others), prompt for itemId, itemName, itemType, and itemVendor. Create an Item object using the parameterized constructor.
// STEP 5: If the choice is invalid, display "Invalid choice" - display item details.
// STEP 6: End the program

#include <iostream>
#include <string>

using namespace std;

class Item {
    int itemId;
    string itemName;
    string itemType;
    string itemVendor;

public:
    Item() {
        itemType = "Electricals";
        itemVendor = "Arun Electricals";
    }

    Item(int id, string name, string type, string vendor) {
        itemId = id;
        itemName = name;
        itemType = type;
        itemVendor = vendor;
    }

    int getItemId() { return itemId; }
    string getItemName() { return itemName; }
    string getItemType() { return itemType; }
    string getItemVendor() { return itemVendor; }
};

int main() {
    int choice;
    cout << "Choose item type:\n1. Electronics\n2. Others\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int id;
        string name;
        cout << "Enter item ID: ";
        cin >> id;
        cout << "Enter item name: ";
        cin >> name;

        Item item;
        item = Item();
        cout << "Item Details:\n";
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Type: " << item.getItemType() << "\n";
        cout << "Vendor: " << item.getItemVendor() << "\n";
    } else if (choice == 2) {
        int id;
        string name, type, vendor;
        cout << "Enter item ID: ";
        cin >> id;
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item type: ";
        cin >> type;
        cout << "Enter item vendor: ";
        cin >> vendor;

        Item item;
        item = Item(id, name, type, vendor);
        cout << "Item Details:\n";
        cout << "ID: " << item.getItemId() << "\n";
        cout << "Name: " << item.getItemName() << "\n";
        cout << "Type: " << item.getItemType() << "\n";
        cout << "Vendor: " << item.getItemVendor() << "\n";
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
