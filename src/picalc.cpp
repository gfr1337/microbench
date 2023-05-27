#include <picalc.h>
#include <cmath>

namespace picalc {
    double compute_pi2(int64_t e) {
        double acc = 0.0;
#pragma clang loop vectorize(enable) interleave(enable)
        for(int64_t i = 1; i <= e; i++) {
            double t = 1.0/i;
            acc += t*t;
        }
        return 6.0*acc;
    }
    double compute_pi(int64_t e) {
        return sqrt(compute_pi2(e));
    }
}

