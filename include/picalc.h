#ifndef PICALC_H
#include <cinttypes>

namespace picalc {
    template<typename T>
        T powp(T x, uint32_t n) {
            T acc = x;
#pragma clang loop vectorize(enable) interleave(enable)
            for(int i = 2; i <= n; i++) {
                acc *= x;
            }
            return acc;
        }
    template<typename O, typename T>
        O powx(T x, int32_t n) {
            if(n < 0) {
                return powp(1/((O)x), -n);
            } else {
                return powp(x, n);
            }
        }
    double compute_pi2(int64_t e);
    double compute_pi(int64_t e);
}

#define PICALC_H "0.1.0"
#endif
