//
// Created by Brian Klemm on 6/23/23.
//
#include "functions.h"
#include "classes.h"
#include "rapidcsv.h"
#include <vector>
#include <iostream>

std::vector<Element> create_element_objects() {
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

        std::cout << "Creating element: " << e.name << ", " << e.symbol << std::endl;
        elements.push_back(e);
    }

    return elements;
    }

int lookup_index_via_symbol(const std::string& symbol, const std::vector<Element>& elements){
    for (int i = 0; i < elements.size(); ++i) {
        if (elements[i].symbol == symbol) {
            return i;
        }
    }
    return -1; // Return -1 when no matching element is found
}

void print_element_info(int symbol_index, const std::vector<Element>& elements){
    if (symbol_index == -1) {
        std::cout << "Please enter a valid symbol from the periodic table." << std::endl;
        return;
    }

    std::cout << elements[symbol_index].symbol << " has the following attributes." << std::endl;
    std::cout << "Name: " << elements[symbol_index].name << std::endl;
    std::cout << "Atomic number: " << elements[symbol_index].atomic_number << std::endl;
    std::cout << "Atomic radius: " << elements[symbol_index].atomic_radius << std::endl;
    std::cout << "Atomic weight: " << elements[symbol_index].atomic_weight << std::endl;
    std::cout << "Boiling Point: " << elements[symbol_index].boiling_point << std::endl;
    std::cout << "Melting Point: " << elements[symbol_index].melting_point << std::endl;
    std::cout << "Specific Heat: " << elements[symbol_index].specific_heat << std::endl;
    std::cout << "Electronic Configuration:" << elements[symbol_index].electronic_configuration << std::endl;
}