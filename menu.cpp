//
// Created by Brian Klemm on 6/23/23.
//

#include <iostream>
#include "menu.h"

void mainMenu(){
    bool keep_open = true;
    do{
        std::cout << "\n-------------Main Menu---------------" << std::endl;
        std::cout << "1. Select an Element" << std::endl;
        std::cout << "2. View a Random Element" << std::endl;
        std::cout << "3. Test Your Knowledge" << std::endl;
        std::cout << "4. Exit Program" << std::endl;
        std::cout << "-------------------------------------" << std::endl;

        short user_menu_choice;
        std::cin >> user_menu_choice;

        if (std::cin.fail()) {
            std::cin.clear(); // Clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters in the input stream
            std::cout << "Invalid input. Please enter a valid number."
                         " Valid selections are numeric and do not include a '.'." << std::endl;
            continue;
        }

        switch(user_menu_choice){
            case 1: {
                std::cout << "1. Select an element";
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
