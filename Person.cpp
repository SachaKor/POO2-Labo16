//
// Created by Shon on 03/05/18.
//

#include "Person.h"

bool Person::canDrive() const {
    for(auto role : roles) {
        if(role.driver()) {
            return true;
        }
    }
    return false;
}

bool Person::hasRole(Role role) const {
    for (auto r : roles) {
        if(r == role) {
            return true;
        }
    }
    return false;
}