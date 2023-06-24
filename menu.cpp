//
// Created by Brian Klemm on 6/23/23.
//

#include <iostream>
#include <limits>
#include <chrono>
#include <thread>
#include "menu.h"
#include "functions.h"
#include "vector"
#include "classes.h"


// mainMenu houses the program and runs the functions and methods when appropriate
void mainMenu(const std::vector<Element>& elements){
    bool keep_open = true;
    std::string symbol;
    do{
        std::cout << "\n-------------Main Menu---------------" << std::endl;
        std::cout << "1. Select an Element" << std::endl;
        std::cout << "2. View a Random Element" << std::endl;
        std::cout << "3. Test Your Knowledge" << std::endl;
        std::cout << "4. Display the Periodic Table" << std::endl;
        std::cout << "5. Exit Program" << std::endl;
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
                elementLookUpTool(elements);
                break;
            }
            case 2:{
                elements[randomNumberGenerator(0, 118)].printElementInfo();
                break;
            }
            case 3:{
                atomicNumberQuiz(elements);
                break;
            }
            case 4:{
                displayPeriodicTable();
                break;
            }
            case 5:{
                keep_open = false;
                break;
            }
            default:{
                std::cout << "Invalid input. Please enter a valid number."
                             " Valid selections are numeric and do not include a '.'." << std::endl;
            }
        }
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }while(keep_open);
}
