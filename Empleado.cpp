//
// Created by Binmex on 25/11/2021.
//

#include "Empleado.h"

Empleado::Empleado() {

}

Empleado::Empleado(const std::string &name, const std::string &lastName, const std::string &id, short age) : name(name),
                                                                                                             lastName(
                                                                                                                     lastName),
                                                                                                             id(id),
                                                                                                             age(age) {}

const std::string &Empleado::getName() const {
    return name;
}

void Empleado::setName(const std::string &name) {
    Empleado::name = name;
}

const std::string &Empleado::getLastName() const {
    return lastName;
}

void Empleado::setLastName(const std::string &lastName) {
    Empleado::lastName = lastName;
}

const std::string &Empleado::getId() const {
    return id;
}

void Empleado::setId(const std::string &id) {
    Empleado::id = id;
}

short Empleado::getAge() const {
    return age;
}

void Empleado::setAge(short age) {
    Empleado::age = age;
}


std::ostream &operator<<(std::ostream &os, const Empleado &empleado) {
    os << "name: " << empleado.name << " lastName: " << empleado.lastName << " id: " << empleado.id << " age: "
       << empleado.age;
    return os;
}

Empleado::~Empleado() {

}