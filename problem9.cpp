#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char sentence[81];
    int vowelCount = 0;

    cout << "Enter a sentence (up to 80 characters): ";
    cin.getline(sentence, 81);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    // Explanation:
    // "C-string uses fixed memory (81 bytes), unlike string, which may allocate more dynamically.
    // This saves space for short inputs and is useful in memory-limited environments."

    return 0;
}
