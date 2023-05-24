#include "picalc.hpp"
#include <fmt/core.h>
namespace picalc {
    void benchmark(int64_t n) {
        for(long i = 0; i < n; i++) {
            fmt::print("{:40.37f}\n", picalc::compute_pi(30000000LL));
        }
    }
}
