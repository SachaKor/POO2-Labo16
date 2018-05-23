//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTAINER_H
#define POO2_LABO16_CONTAINER_H

#include <string>
#include "Person.h"

class Container {
private:
    std::list<Person> persons;
    std::string name;
public:
    Container(std::string name);
};

class Bank : public Container {
public:
    Bank(std::string name);
};

class Boat : public Container {
private:
    Bank* bank;
public:
    Boat(std::string name);
};




#endif //POO2_LABO16_CONTAINER_H
