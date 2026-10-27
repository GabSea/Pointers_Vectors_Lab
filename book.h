//
// Created by CSStudent on 10/27/2026.
//

#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H

#include <iostream>
using namespace std;

class Book {
public:
    Book(string title, string author, double price) : title(title), author(author), price(price) {
        current_ID = ID;
        ID++;
    };
    void display_info() const;
private:
    string title, author;
    double price;
    int current_ID;
    static int ID;
};

#endif //UNTITLED_BOOK_H
