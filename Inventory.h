//
// Created by CSStudent on 10/27/2026.
//

#ifndef UNTITLED_INVENTORY_H
#define UNTITLED_INVENTORY_H

#include <vector>
#include "book.h"

class Inventory {
public:
    void add_book(Book* book_pointer);
    void display_all() const;
    void remove_book(int index);

    ~Inventory();
private:
    vector<Book*> books;
};


#endif //UNTITLED_INVENTORY_H
