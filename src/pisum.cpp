#include <cinttypes>
#include <benchmark.h>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "C++\n";
    int64_t n = 10;
    int64_t m = 100;
    int64_t e = 30000000;
    for(int i = 0; i < n; i++) {
        picalc::benchmark(m, e);
    }
    return 0;
}
