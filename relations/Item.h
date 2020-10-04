#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Category.h"

class Category;

class Item {
    private:
        const char* title;
        double price;
        Category* category;

    public:
        Item(const char* title, double price, Category* category);
        virtual ~Item();

        const char* getTitle() const;
        double getPrice() const;
        const Category& getCategory() const;

        void setTitle(const char* title);
        void setPrice(double price);
        void setCategory(Category* category);
};

std::ostream& operator<<(std::ostream& out, const Item& item);

#endif // ITEM_H
