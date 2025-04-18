#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int numbers[50];
    int searchValue;
    bool found = false;

    for (int i = 0; i < 50; i++) {
        numbers[i] = (rand() % 100) + 1;
    }


    for (int i = 0; i < 49; i++) {
        int minIdx = i;
        for (int j = i + 1; j < 50; j++) {
            if (numbers[j] < numbers[minIdx]) {
                minIdx = j;
            }
        }
    
        int temp = numbers[i];
        numbers[i] = numbers[minIdx];
        numbers[minIdx] = temp;
    }

    cout << "Enter a number to search (1-100): ";
    cin >> searchValue;

 
    for (int i = 0; i < 50; i++) {
        if (numbers[i] == searchValue) {
            cout << "Found at index: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Value not found.\n";
    }


    return 0;
}
// Efficiency Explanation:
    // Linear search checks every element (O n), even if the array is sorted.
    // Binary search uses the sorted array to divide the search space in half (O(log n)).
    // Linear is simpler and finds all occurrences, but is less efficient for large datasets.
