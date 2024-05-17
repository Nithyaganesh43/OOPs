#include <iostream>
using namespace std;

class CurrencyConverter {
private:
    float rupee;
public:
    CurrencyConverter(float r) : rupee(r) {}

    operator float() {
        return rupee * 0.0096; // Rupee to Gbp
    }

    float toEuro() {
        return rupee * 0.011; // Rupee to Euro
    }
};

int main() {
    float rupee;
    cout << "Enter the Indian rupee: ";
    cin >> rupee;

    CurrencyConverter cc(rupee);
    float usd = static_cast<float>(cc);
    float euro = cc.toEuro();

    cout << "USD value: " << usd << endl;
    cout << "Euro Value: " << euro << endl;

    return 0;
}
