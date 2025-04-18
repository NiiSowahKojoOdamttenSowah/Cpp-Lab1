#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double miles, kilometers, meters;

    cout << "Enter distance in miles: ";
    cin >> miles;

    if (miles < 0) {
        cout << "Warning: Negative input converted to positive.\n";
        miles = -miles;
    }

    kilometers = miles * 1.60934;
    meters = kilometers * 1000;

    cout << fixed << setprecision(2);
    cout << miles << " miles is " << kilometers << " kilometers and " << meters << " meters.\n";

    return 0;
}
//Note that floating-point calculations (e.g., 1.60934) can introduce small errors due to binary representation.Explain: "I used double for precision, but for critical applications, l'd round results explicitly
//to avoid tiny discrepancies."