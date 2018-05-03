//
// Created by Shon on 03/05/18.
//

#include "Role.h"

const Role Role::MOTHER("mere",true),
                 FATHER("pere", true),
                 BOY("garcon", false),
                 GIRL("fille", false),
                 POLICEMAN("policier", true),
                 THIEF("voleur", false);

std::string Role::name() {
    return _name;
}

bool Role::driver() {
    return canDrive;
}

Role::Role(const std::string& name, bool canDrive) : _name(name), canDrive(canDrive) {}