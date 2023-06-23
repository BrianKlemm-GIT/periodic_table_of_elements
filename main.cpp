//
// Created by Brian Klemm on 6/23/23.
//

#include "menu.h"
#include "functions.h"

int main(){

    display_periodic_table();
    // creates objects of class Element in vector 'elements'
    // switch function that runs the main menu
    std::vector<Element> elements = create_element_objects();
    mainMenu(elements);

    return 0;
}



