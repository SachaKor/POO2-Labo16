//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_PERSON_H
#define POO2_LABO16_PERSON_H


#include <string>
#include <list>

enum Role {CHILD, PARENT, POLICEMAN, THIEF};
enum Gender {FEMALE, MALE};

class Person {
private:
    std::list<Role> role;
    std::string name;
    Gender gender;
public:
    bool canDrive();
};




#endif //POO2_LABO16_PERSON_H
