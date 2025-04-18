#include <iostream>
using namespace std;

int main() {
    double breakfast, lunch, dinner, total;

    cout << "Enter breakfast cost ($1-$20): ";
    cin >> breakfast;
    if (breakfast < 1 || breakfast > 20) {
        cout << "Invalid cost. Please enter a value between $1 and $20: ";
        cin >> breakfast;
    }

    cout << "Enter lunch cost ($1-$20): ";
    cin >> lunch;
    if (lunch < 1 || lunch > 20) {
        cout << "Invalid cost. Please enter a value between $1 and $20: ";
        cin >> lunch;
    }

    cout << "Enter dinner cost ($1-$20): ";
    cin >> dinner;
    if (dinner < 1 || dinner > 20) {
        cout << "Invalid cost. Please enter a value between $1 and $20: ";
        cin >> dinner;
    }

    total = breakfast + lunch + dinner;

    cout << "Total meal plan cost: $" << total << endl;

    return 0;
}
//Note that checking breakfast ‹ 1 || breakfast › 20 catches negative or excessive values.
//novices might forget to validate, causing incorrect totals (e.g., accepting -5 leads to a negative cost).
//My approach ensures costs are realistic but is limited by no loops, so it only re-prompts once