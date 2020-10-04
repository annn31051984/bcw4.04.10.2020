#include <iostream>
#include "Category.h"
#include "Item.h"

int main() {
    Category* cat = new Category("Gadgets");

    Item* iphone = new Item("iPhone", 1000, cat);
    Item* galaxy = new Item("Galaxy", 900, cat);
    Item* smartWatch = new Item("smartWatch", 300, cat);

    std::cout << *cat << std::endl;

    delete(smartWatch);

    std::cout << *cat << std::endl;


    return 0;
}
