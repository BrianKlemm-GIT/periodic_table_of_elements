//
// Created by Brian Klemm on 6/23/23.
//

#ifndef PERIODIC_TABLE_OF_ELEMENTS_CLASSES_H
#define PERIODIC_TABLE_OF_ELEMENTS_CLASSES_H

#include <string>

class Element {
public:
    std::string name;
    std::string symbol;
    int atomic_number;
    float atomic_weight;
    float melting_point;
    float boiling_point;
    std::string atomic_radius;
    std::string specific_heat;

    void print_element_info() const;
};

#endif //PERIODIC_TABLE_OF_ELEMENTS_CLASSES_H
