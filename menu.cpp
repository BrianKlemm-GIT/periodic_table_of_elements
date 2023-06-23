//
// Created by Brian Klemm on 6/23/23.
//

#include <iostream>
#include <limits>
#include "menu.h"
#include "functions.h"
#include "vector"
#include "classes.h"


void mainMenu(const std::vector<Element>& elements){
    bool keep_open = true;
    std::string symbol;
    do{
        std::cout << "\n-------------Main Menu---------------" << std::endl;
        std::cout << "1. Select an Element" << std::endl;
        std::cout << "2. View a Random Element" << std::endl;
        std::cout << "3. Test Your Knowledge" << std::endl;
        std::cout << "4. Exit Program" << std::endl;
        std::cout << "-------------------------------------" << std::endl;

        short user_menu_choice;
        std::cin >> user_menu_choice;

        // Clears the fail state and ignores remaining characters in the input stream
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number."
                         " Valid selections are numeric and do not include a '.'." << std::endl;
            continue;
        }

        switch(user_menu_choice){
            case 1: {
                std::cout << "Enter the symbol of the element: ";
                std::cin >> symbol;
                int index = lookup_index_via_symbol(symbol, elements);
                print_element_info(index, elements);
                break;
            }
            case 2:{
                std::cout << "2. View a random element";
                break;
            }
            case 3:{
                std::cout << "3. Test your knowledge";
                break;
            }
            case 4:{
                keep_open = false;
                break;
            }
            default:{
                std::cout << "Invalid input. Please enter a valid number."
                             " Valid selections are numeric and do not include a '.'." << std::endl;
            }
        }

    }while(keep_open);
}
