#include <benchmark.h>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "C++\n";
    int n = 2;
    int e = 30000000;

    for(int i = 0; i < n; i++) {
        picalc::benchmark(100, e);
    }
    return 0;
}
