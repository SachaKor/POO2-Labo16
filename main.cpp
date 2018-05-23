#include <iostream>
#include "Container.cpp"
#include "Controller.cpp"
#include "Person.cpp"
#include "Role.cpp"

int main() {
    Controller controller = Controller();
    controller.showMenu();


    return EXIT_SUCCESS;
}