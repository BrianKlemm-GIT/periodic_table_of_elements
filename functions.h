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

void displayPeriodicTable();
std::vector<Element> createElementObjects();
void elementLookUpTool(const std::vector<Element>& elements);
int lookUpIndexViaSymbol(const std::string& symbol, const std::vector<Element>& elements);
int randomNumberGenerator(int first_in_range, int last_in_range);
void atomicNumberQuiz(const std::vector<Element>& elements);

#endif //PERIODIC_TABLE_OF_ELEMENTS_FUNCTIONS_H
