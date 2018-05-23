//
// Created by Shon on 03/05/18.
//

#include <sstream>
#include <iomanip>

#include "Controller.h"

void Controller::showMenu() const {
    std::cout << PRINT << "      : afficher" << std::endl;
    std::cout << EMBARK << " <nom>: embarquer <nom>" << std::endl;
    std::cout << LAND << " <nom>: debarquer <nom>" << std::endl;
    std::cout << MOVE << "      : deplacer bateau" << std::endl;
    std::cout << RESET << "      : reinitialiser" << std::endl;
    std::cout << QUIT << "      : quitter" << std::endl;
    std::cout << MENU << "      : menu" << std::endl;

}

Controller::MenuOption Controller::getInput() {
    std::string input;
    std::cin >> input;
    switch (input[0]) {
        case PRINT:
            display();
            break;
        case EMBARK:
            std::string nameToEmbark = input.substr(2, input.length());

            break;
        case LAND:
            std::string nameToLand = input.substr(2, input.length());
            break;
        case MOVE:
            break;
        case RESET:
            break;
        case QUIT:
            break;
        case MENU:
            break;
        default:
            break;
    }
    return nullptr;
}

void Controller::display() {

}

void Controller::nextTurn() {

}