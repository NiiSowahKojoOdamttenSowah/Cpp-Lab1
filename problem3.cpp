#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discountRate;
    char membership;

    cout << "Enter purchase amount: $";
    cin >> purchaseAmount;

    if (purchaseAmount < 0) {
        cout << "Warning: Negative amount replaced by 0.\n";
        purchaseAmount = 0;
    }

    cout << "Enter membership (R for regular, P for premium): ";
    cin >> membership;
    membership = toupper(membership);

    if (membership == 'P') {
        if (purchaseAmount >= 500)
            discountRate = 0.30;
        else if (purchaseAmount >= 200)
            discountRate = 0.20;
        else if (purchaseAmount >= 100)
            discountRate = 0.10;
        else
            discountRate = 0.0;
    } else {
        if (purchaseAmount >= 1000)
            discountRate = 0.20;
        else if (purchaseAmount >= 500)
            discountRate = 0.10;
        else
            discountRate = 0.0;
    }

    cout << "Discount rate: " << (discountRate * 100) << "%\n";

    return 0;
}
//Nested if separates premium and regular logic clearly, making it easier to modify one without affecting the other. 
//Multiple else-if could mix conditions, increasing errors.