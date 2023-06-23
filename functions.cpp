//
// Created by Brian Klemm on 6/23/23.
//
#include "functions.h"
#include "classes.h"
#include "rapidcsv.h"
#include <vector>
#include <iostream>

void display_periodic_table(){
    std::cout << "  -----             The Periodic Table of Elements                    -----\n"
                 "1 | H |                                                               |He |\n"
                 "  |---+----                                       --------------------+---|\n"
                 "2 |Li |Be |                                       | B | C | N | O | F |Ne |\n"
                 "  |---+---|                                       |---+---+---+---+---+---|\n"
                 "3 |Na |Mg |3B  4B  5B  6B  7B |    8B     |1B  2B |Al |Si | P | S |Cl |Ar |\n"
                 "  |---+---+---------------------------------------+---+---+---+---+---+---|\n"
                 "4 | K |Ca |Sc |Ti | V |Cr |Mn |Fe |Co |Ni |Cu |Zn |Ga |Ge |As |Se |Br |Kr |\n"
                 "  |---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---|\n"
                 "5 |Rb |Sr | Y |Zr |Nb |Mo |Tc |Ru |Rh |Pd |Ag |Cd |In |Sn |Sb |Te | I |Xe |\n"
                 "  |---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---|\n"
                 "6 |Cs |Ba |LAN|Hf |Ta | W |Re |Os |Ir |Pt |Au |Hg |Tl |Pb |Bi |Po |At |Rn |\n"
                 "  |---+---+---+------------------------------------------------------------\n"
                 "7 |Fr |Ra |ACT|\n"
                 "  -------------\n"
                 "              -------------------------------------------------------------\n"
                 "   Lanthanide |La |Ce |Pr |Nd |Pm |Sm |Eu |Gd |Tb |Dy |Ho |Er |Tm |Yb |Lu |\n"
                 "              |---+---+---+---+---+---+---+---+---+---+---+---+---+---+---|\n"
                 "   Actinide   |Ac |Th |Pa | U |Np |Pu |Am |Cm |Bk |Cf |Es |Fm |Md |No |Lw |\n"
                 "              -------------------------------------------------------------" << std::endl;

}

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
