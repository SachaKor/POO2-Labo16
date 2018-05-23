//
// Created by Shon on 03/05/18.
//
#include "Container.h"

Container::Container(const std::string& name) : name(name) {}

bool Container::containsRole(const Role& role) const {
    return false;
}

Person* Container::findPersonByName(std::string name) {
    for (Person* person : persons) {
        if (person->getName().compare(name))
            return person;
    }
    return nullptr;
}
