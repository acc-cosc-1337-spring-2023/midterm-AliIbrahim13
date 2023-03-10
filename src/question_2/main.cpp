#include <iostream>
#include "question2.h"

int main()
{
    std::string input;
    bool is_pal;

    while (true) {
        std::cout << "Enter a string to check if it's a palindrome (type 'exit' to quit): ";
        std::getline(std::cin, input);

        if (input == "exit") {
            break;
        }

        is_pal = is_palindrome(input);
        if (is_pal) {
            std::cout << "The string \"" << input << "\" is a palindrome." << std::endl;
        } else {
            std::cout << "The string \"" << input << "\" is not a palindrome." << std::endl;
        }
    }

    return 0;
}
