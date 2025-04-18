#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    int number, count = 0;
    double sum = 0, average;

    inFile.open("input.txt");
    if (!inFile) {
        cout << "Error opening input file.\n";
        return 1;
    }

    outFile.open("output.txt");
    if (!outFile) {
        cout << "Error opening output file.\n";
        return 1;
    }

    while (inFile >> number) {
        count++;
        sum += number;
        average = sum / count;
        outFile << "After " << count << " numbers, average is " << average << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}
//Forgetting to check file open status or not closing files, leading to data loss.