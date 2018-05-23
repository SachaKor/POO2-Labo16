//
// Created by Shon on 03/05/18.
//

#include "Role.h"

Role Role::POLICEMAN("policier", true, {});
Role Role::THIEF("voleur", false, {});
Role Role::MOTHER("mere",true, {std::make_pair(Role::THIEF, Role::POLICEMAN)});
Role Role::FATHER("pere", true, {std::make_pair(Role::THIEF, Role::POLICEMAN)});
Role Role::BOY("garcon", false, {std::make_pair(Role::THIEF, Role::POLICEMAN), std::make_pair(Role::MOTHER, Role::FATHER)});
Role Role::GIRL("fille", false, {std::make_pair(Role::THIEF, Role::POLICEMAN), std::make_pair(Role::FATHER, Role::MOTHER)});

std::string Role::name() {
    return _name;
}

bool Role::driver() {
    return canDrive;
}

Role::Role(const std::string& name,
           bool canDrive,
           std::initializer_list<std::pair<Role, Role>> cantStayWith) : _name(name),
                                                                        canDrive(canDrive),
                                                                        cantStayWith(cantStayWith) {}

bool operator==(const Role& left, const Role& right) {
    return left._name == right._name;
}

bool Role::cannotStayWith(const Role& role, const Container& container) const {

    return false;
}