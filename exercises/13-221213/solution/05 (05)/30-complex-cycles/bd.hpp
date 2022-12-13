#ifndef BD_HPP_
#define BD_HPP_

#include "abc_types.hpp"

namespace exercise {
struct D {
    A a;
    B b;
    C c;
    D *d = nullptr;
};

B create_b();
D create_d();
}  // namespace exercise

#endif  // BD_HPP_
