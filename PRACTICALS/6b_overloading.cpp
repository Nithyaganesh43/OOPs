#include <iostream>
#include <string>

using namespace std;

class TicketBooking {
public:
    void bookTicket(int amount, string paymentMethod) {
        cout << "Booking ticket for amount: " << amount << " using " << paymentMethod << " payment." << endl;
    }

    void bookTicket(int amount, int walletBalance) {
        if (walletBalance >= amount) {
            cout << "Booking ticket for amount: " << amount << " using Wallet payment." << endl;
        } else {
            cout << "Insufficient balance in Wallet." << endl;
        }
    }

    void bookTicket(int amount, string cardNumber, string expiryDate, int cvv) {
        cout << "Booking ticket for amount: " << amount << " using Credit Card payment." << endl;
        // Additional validation or processing logic for credit card payment can be added here
    }
};

int main() {
    TicketBooking bookingSystem;
    
    int amount;
    cout << "Enter ticket amount: ";
    cin >> amount;

    int choice;
    cout << "Choose payment method:\n";
    cout << "1. Cash\n";
    cout << "2. Wallet\n";
    cout << "3. Credit Card\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            string paymentMethod = "Cash";
            bookingSystem.bookTicket(amount, paymentMethod);
            break;
        }
        case 2: {
            int walletBalance;
            cout << "Enter your wallet balance: ";
            cin >> walletBalance;
            bookingSystem.bookTicket(amount, walletBalance);
            break;
        }
        case 3: {
            string cardNumber, expiryDate;
            int cvv;
            cout << "Enter credit card number: ";
            cin >> cardNumber;
            cout << "Enter expiry date (MM/YY): ";
            cin >> expiryDate;
            cout << "Enter CVV: ";
            cin >> cvv;
            bookingSystem.bookTicket(amount, cardNumber, expiryDate, cvv);
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
