#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <set>
#include "Item.h"

class Item;

class Category {
    private:
        const char* title;
        std::set<Item*>* items;

    public:
        Category(const char* title);
        virtual ~Category();

        const char* getTitle() const;
        const std::set<Item*>& getItems() const;
        
        void setTitle(const char* title);

        void addItem(Item* item);
        void removeItem(Item* item);
};

std::ostream& operator<<(std::ostream& out, const Category& cat);

#endif // CATEGORY_H
