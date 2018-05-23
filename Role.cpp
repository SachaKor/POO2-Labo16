//
// Created by Shon on 03/05/18.
//

#include "Role.h"

const Role Role::MOTHER("mere",true),
           Role::FATHER("pere", true),
           Role::BOY("garcon", false),
           Role::GIRL("fille", false),
           Role::POLICEMAN("policier", true),
           Role::THIEF("voleur", false);

std::string Role::name() {
    return _name;
}

bool Role::driver() {
    return canDrive;
}

Role::Role(const std::string& name, bool canDrive) : _name(name), canDrive(canDrive) {}