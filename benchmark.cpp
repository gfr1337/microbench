#include <picalc.h>
#include <benchmark.h>
#include <fmt/core.h>

namespace picalc {
    void benchmark(long long n) {
        for(long long i = 0; i < n; i++) {
            fmt::print("{:40.37f}\n", compute_pi(30000000));
        }
    }
}
