//
bool test_config()
{
    return true;
}
#include "question4.h"

double get_dna_p_distance(const std::string& dna1, const std::string& dna2) {
    int differences = 0;
    int length = dna1.length();

    for (int i = 0; i < length; i++) {
        if (dna1[i] != dna2[i]) {
            differences++;
        }
    }

    return static_cast<double>(differences) / length;
}
