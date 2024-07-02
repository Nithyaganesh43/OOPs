#include <iostream>
#include <armadillo> // Include Armadillo library

using namespace std;
using namespace arma; // Use Armadillo namespace

int main() {
    // Prompt user for input
    cout << "Enter numbers separated by spaces (e.g., 10 20 30):" << endl;

    // Read numbers from user input
    vector<double> numbers;
    double num;
    while (cin >> num) {
        numbers.push_back(num);
    }

    // Convert vector to Armadillo vector
    vec data(numbers);

    // Calculate the standard deviation using Armadillo's stddev function
    double stdDev = stddev(data);

    // Output the result
    cout << "Standard Deviation: " << stdDev << endl;

    return 0;
}