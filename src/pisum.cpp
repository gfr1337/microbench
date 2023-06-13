#include <cinttypes>
#include <iostream>
#include <string>
#include <vector>
#include <fmt/ostream.h>
#include <picalc.hpp>

int main() {
    int64_t n = 1000;
    for(int i = 0; i < n; i++) {
        fmt::print(std::cout, "{:20.16f}\n", picalc::compute_pi(30000000));
    }
    return 0;
}
