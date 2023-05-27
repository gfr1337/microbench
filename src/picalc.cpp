#include <picalc.h>
#include <cmath>

namespace picalc {
    double invsq(double t) {
        t = 1.0/t;
        return t * t;
    }
    double compute_pi2(int64_t e) {
        return 6.0*mapreduce(invsq, [](double a, double b) { return a+b; }, e, 0.0);
    }
    double compute_pi(int64_t e) {
        return sqrt(compute_pi2(e));
    }
}

