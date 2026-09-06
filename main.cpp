#include <iostream>

#include "src/factorial.hpp"
#include "power.hpp"

int main() {
    std::cout << "2 ^ 10 by the naive approach is: " << naivePower(2, 10) << "\n";
    std::cout << "2 ^ 10 by the unoptimized D&C approach is: " << unoptimizedDCPower(2, 10) << "\n";
    std::cout << "2 ^ 10 by the optimized D&C approach is: " << optimizedDCPower(2, 10) << "\n";
    return 0;
}
