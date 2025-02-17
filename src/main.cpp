#include <iostream>
#include "utils.hpp"


int main() {
    int a = 7;
    int b = 5;
    int add_res = add(a, b);
    int sub_res = sub(a, b);
    int mul_res = mul(a, b);
    std::cout << "Результаты сложения, вычитания и умножения: " << add_res << ' ' << sub_res << ' ' << mul_res << std::endl;
    return 1;
}