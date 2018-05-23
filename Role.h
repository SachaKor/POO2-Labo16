//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_ROLE_H
#define POO2_LABO16_ROLE_H


#include <string>

class Role {
private:
    std::string _name;
    bool canDrive;

    static const Role MOTHER, FATHER, BOY, GIRL, POLICEMAN, THIEF;

    Role(const std::string& name, bool canDrive);

    // Deny the copies
//    Role(const Role&) = delete;
//    Role& operator=(const Role&) = delete;

public:
    bool driver();
    std::string name();
};


#endif //POO2_LABO16_ROLE_H
