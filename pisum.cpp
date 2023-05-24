#include <iostream>
#include <fmt/core.h>
#include "picalc.hpp"

int main() {
    for(int i = 0; i < 100; i++) {
        fmt::print("{:40.37f}\n", picalc::compute_pi(30000000));
    }
    return 0;
}
