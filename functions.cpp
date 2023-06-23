//
// Created by Brian Klemm on 6/23/23.
//

#include "functions.h"
#include "classes.h"
#include "rapidcsv.h"
#include <vector>
#include <iostream>

void create_element_objects() {
    std::vector<Element> elements;
    rapidcsv::Document doc("periodic_table.csv", rapidcsv::LabelParams(0, -1));

    std::vector<std::string> names = doc.GetColumn<std::string>("Name");
    std::vector<std::string> symbols = doc.GetColumn<std::string>("Symbol");
    std::vector<int> atomic_numbers = doc.GetColumn<int>("Atomic_Number");
    std::vector<float> atomic_weights = doc.GetColumn<float>("Atomic_Weight");
    std::vector<float> melting_points = doc.GetColumn<float>("Melting_Point");
    std::vector<float> boiling_points = doc.GetColumn<float>("Boiling_Point");
    std::vector<std::string> atomic_radii = doc.GetColumn<std::string>("Atomic_Radius");
    std::vector<std::string> specific_heats = doc.GetColumn<std::string>("Specific_Heat");
    std::vector<std::string> electronic_configurations = doc.GetColumn<std::string>("Electronic_Configuration");

    for(size_t i = 0; i < names.size(); ++i) {
        Element e;
        e.name = names[i];
        e.symbol = symbols[i];
        e.atomic_number = atomic_numbers[i];
        e.atomic_weight = atomic_weights[i];
        e.melting_point = melting_points[i];
        e.boiling_point = boiling_points[i];
        e.atomic_radius = atomic_radii[i];
        e.specific_heat = specific_heats[i];
        e.electronic_configuration = electronic_configurations[i];
        elements.push_back(e);
    }

//    // Print data to test if it works correctly
//    for (const Element &element : elements) {
//        std::cout << "Name: " << element.name << ", Symbol: " << element.symbol << std::endl;
//    }
}

int lookup_index_via_symbol(const std::string& symbol, const std::vector<Element>& elements){
    for (int i = 0; i < elements.size(); ++i) {
        if (elements[i].symbol == symbol) {
            return i;
        }
    }
}