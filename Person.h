//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_PERSON_H
#define POO2_LABO16_PERSON_H


#include <string>
#include <list>

#include "Role.h"

enum Gender {FEMALE, MALE};

class Person {
private:
    const std::list<Role> roles;
    std::string _name;
public:
    bool canDrive();
};




#endif //POO2_LABO16_PERSON_H
