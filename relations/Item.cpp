#include "Item.h"

Item::Item(const char* title, double price, Category* category)
    : title(title), price(price), category(category) {
        this->category->addItem(this);
    }

Item::~Item() {
    this->category->removeItem(this);
}

const char* Item::getTitle() const {
    return this->title;
}

double Item::getPrice() const {
    return this->price;
}

const Category& Item::getCategory() const {
    return *(this->category);
}

void Item::setTitle(const char* title) {
    this->title = title;
}

void Item::setPrice(double price) {
    this->price = price;
}

void Item::setCategory(Category* category) {
    this->category = category;
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
    out << item.getTitle() << "(";
    out << item.getCategory().getTitle() << ", ";
    out << item.getPrice() << ")";
    return out;
}

