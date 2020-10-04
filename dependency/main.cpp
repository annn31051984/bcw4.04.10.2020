#include <iostream>
#include "Master.h"


int main() {
    Master* master = new Master();

    std::cout << *master << std::endl;
    master->createSlave();
    std::cout << master->getSlave() << std::endl;

    delete(master);

    return 0;
}
