//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTAINER_H
#define POO2_LABO16_CONTAINER_H

#include <string>
#include "Person.h"

class Container {
private:
    std::string name;
    std::list<Person*> persons;
public:
    Container(const std::string&);
};



#endif //POO2_LABO16_CONTAINER_H
