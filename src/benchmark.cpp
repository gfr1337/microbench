#include <picalc.h>
#include <benchmark.h>
#include <fmt/core.h>

namespace picalc {
    void benchmark(int64_t n, int64_t e) {
        for(int64_t i = 0; i < n; i++) {
            fmt::print("{:16.9f}\n", compute_pi(e));
        }
    }
}
