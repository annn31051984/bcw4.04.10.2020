#ifndef SLAVE_H
#define SLAVE_H

#include <iostream>
#include "Master.h"

class Master;

class Slave {
    private:
        const char* name;
        Master* master;

    public:
        Slave(Master* master, const char* name="Slave");
        virtual ~Slave();

        const char* getName() const;
        void setName(const char* name);

        const Master& getMaster() const;
};

std::ostream& operator<<(std::ostream& out, const Slave& slave);

#endif // SLAVE_H
