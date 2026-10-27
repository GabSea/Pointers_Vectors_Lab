//
// Created by CSStudent on 10/27/2026.
//

#include "Inventory.h"

void Inventory::add_book(Book *book_pointer) {
    this->books.push_back(book_pointer);
}

void Inventory::remove_book(int index) {
    delete(this->books[index]);
    this->books.erase(this->books.begin() + index);
}

void Inventory::display_all() const {
    for (int i = 0; i < this->books.size(); i++) {
        this->books[i]->display_info();
    }
}

Inventory::~Inventory() {
    for (int i = 0; i < this->books.size(); i++) {
        delete(this->books[i]);
        this->books.erase(this->books.begin() + i);
    }
}