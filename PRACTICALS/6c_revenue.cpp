#include <iostream>
#include <string>

using namespace std;

// Base class Event
class Event {
protected:
    string eventName;
    int ticketPrice;
    int expectedAttendance;

public:
    // Constructor
    Event(string name, int price, int attendance) {
        this->eventName = name;
        this->ticketPrice = price;
        this->expectedAttendance = attendance;
    }

    // Virtual method to calculate projected revenue
    virtual int calculateProjectedRevenue() {
        return this->ticketPrice * this->expectedAttendance;
    }
};

// Derived class for Conference
class Conference : public Event {
public:
    // Constructor
    Conference(string name, int price, int attendance)
        : Event(name, price, attendance) {
    }

    // Override calculateProjectedRevenue method for Conference
    int calculateProjectedRevenue() override {
        // Conference revenue calculation can be specific, such as considering registration fees or additional services
        return (this->ticketPrice * this->expectedAttendance) + 5000; // Example additional revenue for services
    }
};

// Derived class for Concert
class Concert : public Event {
public:
    // Constructor
    Concert(string name, int price, int attendance)
        : Event(name, price, attendance) {
    }

    // Override calculateProjectedRevenue method for Concert
    int calculateProjectedRevenue() override {
        // Concert revenue may vary based on ticket prices and expected attendance
        return this->ticketPrice * this->expectedAttendance * 1.2; // Example: projecting 20% more revenue
    }
};

// Main function to demonstrate the event management system
int main() {
    // Example instances of different events
    Conference conference("Tech Conference", 100, 200);
    Concert concert("Rock Concert", 50, 500);

    // Calculate and display projected revenues
    cout << "Projected revenue for " << conference.eventName << ": $" << conference.calculateProjectedRevenue() << endl;
    cout << "Projected revenue for " << concert.eventName << ": $" << concert.calculateProjectedRevenue() << endl;

    return 0;
}
