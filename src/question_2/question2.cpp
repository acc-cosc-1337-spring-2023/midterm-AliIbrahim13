#include "question2.h"

bool test_config()
{
    return true;
}
#include "question2.h"

bool is_palindrome(const std::string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}
