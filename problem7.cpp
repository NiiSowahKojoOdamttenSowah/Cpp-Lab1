#include <iostream>
using namespace std;

int main() {
    int scores[15];
    double median;

    for (int i = 0; i < 15; i++) {
        cout << "Enter score " << (i + 1) << " (0-100): ";
        cin >> scores[i];
        while (scores[i] < 0 || scores[i] > 100) {
            cout << "Invalid. Enter 0-100: ";
            cin >> scores[i];
        }
    }

    for (int i = 0; i < 14; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (scores[i] > scores[j]) {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    median = scores[7];
    cout << "Median score: " << median << endl;

    // Explanation:
    // An array stores all scores compactly and allows sorting/indexing.
    // Individual variables would be impractical for 15 scores.

    return 0;
}
