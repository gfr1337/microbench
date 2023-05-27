#include <picalc.h>
#include <cmath>

namespace picalc {
    static double sq(double t) {
        return t*t;
    }
    double compute_pi2(int64_t e) {
        return 6.0*sum([](int64_t i) { return sq(1.0/i); }, e);
    }
    double compute_pi(int64_t e) {
        return sqrt(compute_pi2(e));
    }
}
