#include <benchmark.h>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv) {
    std::cout << "C++\n";
    for(int i = 0; i < 10; i++) {
        picalc::benchmark(100, 30000000);
    }
    return 0;
}
