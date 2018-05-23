//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTROLLER_H
#define POO2_LABO16_CONTROLLER_H

#include <list>
#include "Bank.h"
#include "Boat.h"

class Controller {
private:
    int turn;
    std::list<Person*> persons;

    // containers
    Bank* leftBank;
    Bank* rightBank;
    Boat* boat;

    // menu constants
    enum MenuOption {
        PRINT = 'p',
        EMBARK = 'e',
        LAND = 'd',
        MOVE = 'm',
        RESET = 'r',
        QUIT = 'q',
        MENU = 'h'
    };

public:
    void showMenu() const;
    void executeCommand();
    void display();
    void nextTurn();
};


#endif //POO2_LABO16_CONTROLLER_H
