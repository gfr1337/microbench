#include <cstdint>
#include <cmath>
#include "picalc.hpp"

namespace picalc {
    double compute_pi(int64_t e) {
        double acc = 0.0;
        for(int64_t i = 1; i <= e; i++) {
            double t = i;
            acc += 1.0/sq(t);
        }
        return sqrt(6.0*acc);
    }
}
