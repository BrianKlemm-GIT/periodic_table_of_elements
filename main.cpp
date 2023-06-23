//
// Created by Brian Klemm on 6/23/23.
//
#include <iostream>
#include "menu.h"

int main(){

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

    mainMenu();

    return 0;
}



