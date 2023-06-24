//
// Created by Brian Klemm on 6/23/23.
//

#include "classes.h"
#include <iostream>

// method utilized in the class Element
void Element::printElementInfo() const{
    std::cout << this->symbol << " has the following attributes." << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Atomic number: " << this->atomic_number << std::endl;
    std::cout << "Atomic radius: " << this->atomic_radius << std::endl;
    std::cout << "Atomic weight: " << this->atomic_weight << std::endl;
    std::cout << "Boiling Point: " << this->boiling_point << std::endl;
    std::cout << "Melting Point: " << this->melting_point << std::endl;
    std::cout << "Specific Heat: " << this->specific_heat << std::endl;
}