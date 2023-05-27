#ifndef PICALC_H
#include <cinttypes>

namespace picalc {
    template<typename F, typename R, typename I, typename A>
        A mapreduce(F f, R r, const I &end, A acc) {
#pragma clang loop vectorize(enable) interleave(enable)
            for(I i = 1; i <= end; i++) {
                acc = r(acc, f(i));
            }
            return acc;
        }
    double invsq(double t);
    double compute_pi2(int64_t e);
    double compute_pi(int64_t e);
}

#define PICALC_H "0.1.0"
#endif
