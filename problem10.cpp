#include <iostream>
using namespace std;


struct Book {
    char title[50];
    char author[50];
    double price;
};

int main() {
    Book books[10];
    int maxIndex = 0;


    for (int i = 0; i < 10; i++) {
        cout << "Book " << (i + 1) << ":\n";

        cout << "Enter title: ";
        cin.getline(books[i].title, 50);

        cout << "Enter author: ";
        cin.getline(books[i].author, 50);

        cout << "Enter price: $";
        cin >> books[i].price;

        // Validate price
        while (books[i].price < 0) {
            cout << "Invalid. Enter positive price: $";
            cin >> books[i].price;
        }

        cin.ignore(); 
    }

    
    for (int i = 1; i < 10; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }


    cout << "\nMost expensive book: " 
         << books[maxIndex].title 
         << " by " << books[maxIndex].author 
         << ", $" << books[maxIndex].price << endl;

    // Explanation:
    // Struct groups related data=title, author, price and 
    // making the array easier to manage than three separate arrays, which could misalign."

    return 0;
}
