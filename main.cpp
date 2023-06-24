//
// Created by Brian Klemm on 6/23/23.
//

#include "menu.h"
#include "functions.h"
#include <chrono>
#include <thread>

int main(){

    // displays the periodic table as a reference for the user.
    display_periodic_table();

    // pauses the screen for .75 seconds so if the user's screen is small they will notice the period table.
    std::this_thread::sleep_for(std::chrono::milliseconds(750));

    // creates objects of class Element in vector 'elements'
    std::vector<Element> elements = create_element_objects();

    // switch function that runs the main menu
    mainMenu(elements);

    return 0;
}



