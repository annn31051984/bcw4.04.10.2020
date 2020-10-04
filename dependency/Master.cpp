#include "Master.h"

Master::Master(const char* name): name(name), slave(NULL) {}

Master::~Master() {
    delete(this->slave);
}

const char* Master::getName() const {
    return this->name;
}

void Master::setName(const char* name) {
    this->name = name;
}

const Slave& Master::getSlave() {
    return *(this->slave);
}

void Master::createSlave(const char* name) {
    if ( this->slave != NULL ) {
        return;
    }
    this->slave = new Slave(this, name);
}

void Master::removeSlave() {
    if ( this->slave != NULL ) {
        delete(this->slave);
    }
}

std::ostream& operator<<(std::ostream& out, const Master& master) {
    out << "Master [" << master.getName() << "]";
    return out;
}