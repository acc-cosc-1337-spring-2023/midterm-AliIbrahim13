#include <iomanip>
#include <iostream>
#include "question4.h"

int main() {
    std::string dna1 = "GAGCCTACTAACGGGAT";
    std::string dna2 = "CATCGTAATGACGGCCT";
    double p_distance = get_dna_p_distance(dna1, dna2);
    std::cout << "The p-distance of the strings is: " << std::fixed << std::setprecision(4) << p_distance << std::endl;

    return 0;
}
