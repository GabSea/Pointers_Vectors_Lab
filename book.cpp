//
// Created by CSStudent on 10/27/2026.
//

#include "book.h"

int Book::ID = 0;

void Book::display_info() const {
    cout << "--------" << this->title << "--------\n"
            "ID: " << this->current_ID << "\n"
            "Author: " << this->author << "\n"
            "Price: " << this->price << endl;
}
