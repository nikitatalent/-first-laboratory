#include <iostream>
#include "utils.hpp"


int main() {
    int a = 7;
    int b = 5;
    int add_res = add(a, b);
    int sub_res = sub(a, b);
    std::cout << add_res << ' ' << sub_res << std::endl;
    return 1;
}