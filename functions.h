//
// Created by Brian Klemm on 6/23/23.
//

#ifndef PERIODIC_TABLE_OF_ELEMENTS_FUNCTIONS_H
#define PERIODIC_TABLE_OF_ELEMENTS_FUNCTIONS_H

#include "functions.h"
#include "classes.h"
#include "rapidcsv.h"
#include <vector>
#include <iostream>

std::vector<Element> create_element_objects();
int lookup_index_via_symbol(const std::string& symbol, const std::vector<Element>& elements);
void print_element_info(int symbol_index, const std::vector<Element>& elements);

#endif //PERIODIC_TABLE_OF_ELEMENTS_FUNCTIONS_H
