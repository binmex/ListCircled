//
// Created by Binmex on 25/11/2021.
//

#ifndef LISTCIRCLED_EMPLEADO_H
#define LISTCIRCLED_EMPLEADO_H

#include <string>
#include <ostream>

class Empleado {
public:
    Empleado();

    Empleado(const std::string &name, const std::string &lastName, const std::string &id, short age);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    const std::string &getId() const;

    void setId(const std::string &id);

    short getAge() const;

    void setAge(short age);

    friend std::ostream &operator<<(std::ostream &os, const Empleado &empleado);

    virtual ~Empleado();

private:
    std::string name;
    std::string lastName;
    std::string id;
    short age;
};


#endif //LISTCIRCLED_EMPLEADO_H
