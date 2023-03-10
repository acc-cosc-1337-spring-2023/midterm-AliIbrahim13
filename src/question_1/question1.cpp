#include "question1.h"

bool test_config()
{
    return true;
}
#include "question1.h"

std::string transcribe_dna_into_rna(std::string dna_strand) {
    for (auto& c : dna_strand) {
        if (c == 'T') {
            c = 'U';
        }
    }
    return dna_strand;
}
