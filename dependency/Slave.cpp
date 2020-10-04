#include "Slave.h"

Slave::Slave(Master* master, const char* name): master(master), name(name) {}

Slave::~Slave() {}

const char* Slave::getName() const {
    return this->name;
}

void Slave::setName(const char* name) {
    this->name = name;
}

const Master& Slave::getMaster() const {
    return *(this->master);
}

std::ostream& operator<<(std::ostream& out, const Slave& slave) {
    out << "Slave [" << slave.getName() << "]";
    return out;
}
