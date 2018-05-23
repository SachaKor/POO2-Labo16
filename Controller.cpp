//
// Created by Shon on 03/05/18.
//

#include <sstream>
#include <iostream>

#include "Controller.h"


void Controller::showMenu() const {
    std::cout << (char)PRINT << "      : afficher" << std::endl;
    std::cout << (char)EMBARK << " <nom>: embarquer <nom>" << std::endl;
    std::cout << (char)LAND << " <nom>: debarquer <nom>" << std::endl;
    std::cout << (char)MOVE << "      : deplacer bateau" << std::endl;
    std::cout << (char)RESET << "      : reinitialiser" << std::endl;
    std::cout << (char)QUIT << "      : quitter" << std::endl;
    std::cout << (char)MENU << "      : menu" << std::endl;

}

void Controller::executeCommand() {
    std::string input;
    std::cin >> input;
    switch (input[0]) {
        case PRINT: {
            display();
            break;
        }
        case EMBARK: {
            std::string nameToEmbark = input.substr(2,input.length());
            //boat.emark(name);
            break;
        }
        case LAND: {
            std::string nameToLand = input.substr(2,input.length());
            break;
        }
        case MOVE: {
            break;
        }
        case RESET: {
            break;
        }
        case QUIT: {
            break;
        }
        case MENU: {
            break;
        }
        default: {
            break;
        }
    }
}

void Controller::display() {

}

void Controller::nextTurn() {

}