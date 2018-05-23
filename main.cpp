#include <iostream>
#include "Controller.cpp"

int main() {
    Controller controller = Controller();
    //controller.addPerson(new Person("mere"));
    controller.showMenu();
    controller.executeCommand();
    return EXIT_SUCCESS;
}