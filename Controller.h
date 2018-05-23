//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTROLLER_H
#define POO2_LABO16_CONTROLLER_H


class Controller {
private:
    int turn;

    // menu constants
    const std::string PRINT,
               EMBARK,
               LAND,
               MOVE,
               RESET,
               QUIT,
               MENU;
public:
    void showMenu() const;
    void display();
    void nextTurm();
};


#endif //POO2_LABO16_CONTROLLER_H
