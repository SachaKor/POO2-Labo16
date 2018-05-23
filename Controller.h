//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTROLLER_H
#define POO2_LABO16_CONTROLLER_H

class Controller {
private:
    int turn;
    std::list<Person> persons;

    // menu constants
    enum MenuOption {
        PRINT,
        EMBARK,
        LAND,
        MOVE,
        RESET,
        QUIT,
        MENU
    };

public:
    Controller() {
        persons.insert(new Person())
    }
    void showMenu() const;
    MenuOption getInput();
    void display();
    void nextTurn();
};


#endif //POO2_LABO16_CONTROLLER_H
