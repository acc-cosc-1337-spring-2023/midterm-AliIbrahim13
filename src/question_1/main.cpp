
#include <iostream>
#include "question1.h"

int main() {
    std::string dna_string = "GATGGAACTTGACTACGTAAATT";
    std::string rna_string = transcribe_dna_into_rna(dna_string);
    std::cout << "DNA string: " << dna_string << std::endl;
    std::cout << "RNA string: " << rna_string << std::endl;
    return 0;
}
