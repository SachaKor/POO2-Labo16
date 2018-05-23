//
// Created by Shon on 03/05/18.
//

#include "Container.h"

Container::Container(std::string name) {

}

Boat::Boat(std::string name) : Container::Container(name) {

}

Bank::Bank(std::string name) : Container::Container(name) {
}
