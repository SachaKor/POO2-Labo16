//
// Created by Shon on 03/05/18.
//

#include "Person.h"

bool Person::canDrive(){
    for(Role role : roles) {
        if(role.driver()) {
            return true;
        }
    }
    return false;
}