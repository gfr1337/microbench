#include <chrono>
#include <fmt/core.h>
#include <picalc.h>
#include <benchmark.h>

namespace picalc {
    void benchmark(int64_t n, int64_t e) {
        auto a = std::chrono::high_resolution_clock::now();
        for(int64_t i = 0; i < n; i++) {
            fmt::print("{:16.9f}\n", compute_pi(e));
        }
        auto b = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::ratio<1, 1>> c = b-a;
        fmt::print("{} seconds\n", c.count());
    }
}
