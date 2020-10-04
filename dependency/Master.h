#ifndef MASTER_H
#define MASTER_H

#include <iostream>
#include "Slave.h"

class Slave;

class Master {
    private:
        const char* name;
        Slave* slave;

    public:
        Master(const char* name="Master");
        virtual ~Master();

        const char* getName() const;
        void setName(const char* name);

        const Slave& getSlave();
        void createSlave(const char* name="Slave");
        void removeSlave();
};

std::ostream& operator<<(std::ostream& out, const Master& master);

#endif // MASTER_H
