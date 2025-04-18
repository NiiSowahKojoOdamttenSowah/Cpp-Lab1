#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer (0-20): ";
    cin >> n;

    while (n < 0 || n > 20) {
        cout << "Invalid. Enter a number between 0 and 20: ";
        cin >> n;
    }

    if (n == 0)
        factorial = 1;
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
//Large inputs (e.g., >20) cause overflow because unsigned long long can't store numbers like 211.
// I limited input to 20 to ensure correct results.*
