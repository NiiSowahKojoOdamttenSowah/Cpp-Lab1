#include <iostream>
using namespace std;


double calcCartTotal(int qty1, double price1, int qty2, double price2, int qty3, double price3) {
    return (qty1 * price1) + (qty2 * price2) + (qty3 * price3);
    
}

int main() {
    int qty1, qty2, qty3;
    double price1, price2, price3;
    int numCarts;
    double total;

    cout << "Enter number of carts to process: ";
    cin >> numCarts;

    for (int i = 1; i <= numCarts; i++) {
        cout << "\nCart " << i << ":\n";

        cout << "Enter quantity and price for item 1: ";
        cin >> qty1 >> price1;
        if (qty1 < 0) qty1 = 0;
        if (price1 < 0) price1 = 0;

        cout << "Enter quantity and price for item 2: ";
        cin >> qty2 >> price2;
        if (qty2 < 0) qty2 = 0;
        if (price2 < 0) price2 = 0;

        cout << "Enter quantity and price for item 3: ";
        cin >> qty3 >> price3;
        if (qty3 < 0) qty3 = 0;
        if (price3 < 0) price3 = 0;

        total = calcCartTotal(qty1, price1, qty2, price2, qty3, price3);

        cout << "Cart " << i << " total: $" << total << endl;
    }

    return 0;
}

//The function reduces code duplication and makes it easier to update the calculation logic.
// Inline code would be harder to maintain for multiple carts.