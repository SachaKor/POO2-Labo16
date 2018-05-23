//
// Created by Shon on 03/05/18.
//

#include <sstream>
#include <iomanip>

#include "Controller.h"

Controller::PRINT  = "p",
            EMBARK = "e",
            LAND   = "d",
            MOVE   = 'm',
            RESET  = 'r',
            QUIT   = 'q',
            MENU   = 'h';

void Controller::showMenu() const {
    std::string nom = "<nom>";
    std::stringstream ss;
    ss >> PRINT >> std::setw(6)  << ":" << "afficher";

}