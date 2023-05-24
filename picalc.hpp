#include <cstdint>

namespace picalc {
    template<typename T>
        T sq(T x) {
            return x*x;
        }
    double compute_pi(int64_t e);
}
