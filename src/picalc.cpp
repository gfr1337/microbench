#include <picalc.h>
#include <cmath>

namespace picalc {
    double compute_pi2(int64_t e) {
        double acc = 0.0;
#pragma clang loop vectorize(enable) interleave(enable)
        for(int64_t i = 1; i <= e; i++) {
            acc += powx<double>(i, -2);
        }
        return 6.0*acc;
    }
    double compute_pi(int64_t e) {
        return sqrt(compute_pi2(e));
    }
}

