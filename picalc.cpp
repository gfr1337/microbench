#include <picalc.h>
#include <cmath>

namespace picalc {
    double compute_pi(int64_t e) {
        double acc = 0.0;
        for(long long i = 1; i <= e; i++) {
            double t = i;
            acc += 1.0/(t*t);
        }
        return sqrt(6.0*acc);
    }
}
