#include <iostream>
#include "Inventory.h"
using namespace std;

//functions

void adding_book();
void removing_book();
void displaying_all();
void cleanup();

// main and definitions

Inventory store;

int main() {

    int choice = 0;

    cout << "Welcome welcome to my humble (Definitely real!!) digital bookstore.\n"
            "Our options are as follows:" << endl;

    while (choice != -1) {
        cout << "-------------------------------------\n"
                "1: Add a book\n"
                "2: Remove a book\n"
                "3: Display all books\n"
                "-1: Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                adding_book();
                break;
            case 2:
                removing_book();
                break;
            case 3:
                displaying_all();
                break;
            default:
                break;
        }
    }

    cout << "buhbye!!" << endl;

    return 0;
}

void adding_book() {
    string a, b;
    double c;

    cout << "Enter the book's title/name: ";
    cin >> a;
    cout << "Enter the book's author: ";
    cin >> b;
    cout << "Enter the price of the book:\n"
            "(with decimal values, but no $ sign)\n"
            "(Example: 20.00) ";
    cin >> c;

    Book *book = new Book(a, b, c);

    store.add_book(book);
}

void removing_book() {
    int id;

    cout << "Enter the ID of the book you want to remove:\n"
            "(Type \"-1\" to cancel.) ";
    cin >> id;

    if (id == -1) {
        return;
    }

    store.remove_book(id);

}

void displaying_all() {

    cout << "Here is every book currently in the store:\n";

    store.display_all();
}

/*
Book
bookA("BookA", "Name", 20.00),
bookB("BookB", "Name", 30.00),
bookC("BookC", "Name", 40.00);

Inventory inv;
inv.add_book(&bookA);
inv.add_book(&bookB);
inv.add_book(&bookC);

inv.display_all();
*/